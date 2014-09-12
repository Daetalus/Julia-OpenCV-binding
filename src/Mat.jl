type Mat
	handle::Ptr{Void}
end

type cvRange
    rangeStart::Int
    rangeEnd::Int
end

Mat(rows::Int32, cols::Int32, matType::Int32) = Mat(createMat(rows::Int32, cols::Int32, matType::Int32))
Mat() = Mat(createMat())

function createMat(rows::Int32, cols::Int32, matType::Int32)
    hnd = ccall( (:createMat2, "../libcv2"), Ptr{Void}, (Int32, Int32, Int32), rows, cols, matType)
    return hnd;
end
function createMat()
    hnd = ccall( (:createMat1, "../libcv2"), Ptr{Void}, (), )
    return hnd;
end

function depth(mat::Mat)
    ccall( (:depth, "../libcv2"), Int, (Ptr{Void}, ), mat.handle)
end

function channels(mat::Mat)
    ccall( (:channels, "../libcv2"), Int, (Ptr{Void}, ), mat.handle)
end

function dims(mat::Mat)
    ccall( (:dims, "../libcv2"), Int, (Ptr{Void}, ), mat.handle)
end

function cols(mat::Mat)
    ccall( (:cols, "../libcv2"), Int, (Ptr{Void}, ), mat.handle)
end

function rows(mat::Mat)
    ccall( (:rows, "../libcv2"), Int, (Ptr{Void}, ), mat.handle)
end
function empty(mat::Mat)
    ccall( (:empty, "../libcv2"), Bool, (Ptr{Void}, ), mat.handle)
end

function clone(mat::Mat)
    image = Mat(ccall( (:cloneInWrap, "../libcv2"), Ptr{Void}, (Ptr{Void}, ), mat.handle))
    return image
end

function adjustROI(mat::Mat, dtop::Int, dbottom::Int, dleft::Int, dright::Int)
    mat = Mat(ccall( (:adjustROI, "../libcv2"), Ptr{Void}, (Ptr{Void}, Int, Int, Int, Int), mat.handle, dtop, dbottom, dleft, dright))
    return mat
end

function subMatrix(mat::Mat, rowRange::cvRange, colRange::cvRange)
    subMat = Mat(ccall( (:submat1, "../libcv2"), Ptr{Void}, (Ptr{Void}, Int, Int, Int, Int), mat.handle, rowRange.rangeStart, rowRange.rangeEnd, colRange.rangeStart, colRange.rangeEnd))
    return subMat
end

# index support,
# like image[1,1]
getindex(img::Mat, channel::Int, i::Int, j::Int) = at(img, channel, i, j)
# C++ Mat::at
function at(mat::Mat, channel::Int, i::Int, j::Int)
    ccall( (:at, "../libcv2"), Int, (Ptr{Void}, Int, Int, Int), mat.handle, channel, i, j)
end
