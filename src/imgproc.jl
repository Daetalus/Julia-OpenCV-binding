function split(image::Mat)
    hnd = ccall( (:split, "../libcv2"), Ptr{Ptr{Void}}, (Ptr{Void},), image.handle)
    images = pointer_to_array(hnd, 3)
    imageR = convert(Array{Mat, 1}, images)
    return imageR
end

function convert(::Type{Array{Mat, 1}}, ptrArray::Array{Ptr{Void}, 1})
    matArray = Mat[]
    for ptr in ptrArray
        append!(matArray, [Mat(ptr)])
    end
    return matArray
end

function calcHist(images::Array{Mat,},
                  channels::Array{Int, 1},
                  #Null, #mask
                  histSize::Array{Int, 1},
                  ranges::Array{Float64, 1},
                  uniform::Bool = true,
                  accumulate::Bool = false)
    nimages = length(images)
    println(nimages)
    mask = Mat()

    imagesPtr = convertMatArray(images)
    hnd = ccall( (:calcHist, "../libcv2"),
              Ptr{Int},
              (Ptr{Ptr{Void}}, Int, Ptr{Int}, Ptr{Void}, Int, Ptr{Int}, Ptr{Float64}, Bool, Bool),
              imagesPtr, nimages, channels, mask.handle, dims(images[1]), histSize, ranges, uniform, accumulate)
    hist = pointer_to_array(hnd, histSize[1])
    return hist
end

type Point
    x::Int
    y::Int
end

type cvPoint
    handle::Ptr{Void}
end

function cvPoint(x::Int, y::Int)
    pt = cvPoint(ccall( (:setPoint, "../libcv2"), Ptr{Void}, (Int, Int), x, y))
    return pt
end

function polylines(image::Mat,
                   points::Array{cv2.Point, 1},
                   isClosed::Bool,
                   color::(Int, Int, Int),
                   thickness::Int = 1,
                   lineType::Int = 8,
                   shift::Int = 0)

    cvPts = convertPointArray(points)
    numOfPt = length(points) 
    colorPtr = convertColortoPtr(color)

    ccall( (:polylines, "../libcv2"), Void, (Ptr{Void}, Ptr{Ptr{Void}}, Int, Bool, Ptr{Int}, Int, Int, Int), image.handle, cvPts, numOfPt, isClosed, colorPtr, thickness, lineType, shift)
end

function convertColortoPtr(color::(Int, Int, Int))
    colorPtr = [color[1], color[2], color[3]]
    return colorPtr
end

function convertMatArray(images::Array{cv2.Mat, 1})
    cvMat = Ptr{Void}[]
    for i in 1:length(images)
        append!(cvMat, [images[i].handle])
    end
    return cvMat
end

function convertPointArray(points::Array{cv2.Point, 1})
    cvPts = Ptr{Void}[]
    for i in 1:length(points)
        pt = cvPoint(points[i].x, points[i].y)
        append!(cvPts, [pt.handle])
    end
    return cvPts
end
