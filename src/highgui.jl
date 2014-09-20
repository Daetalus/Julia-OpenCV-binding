function imread(filename::String)
	hnd =  Mat(ccall( (:imread, "../libcv2"), Ptr{Void},(Ptr{Uint8},), bytestring(filename)))
	return hnd
end

function imshow(winName::String, mat::Mat)
	ccall( (:imshow, "../libcv2"), Void, (Ptr{Uint8}, Ptr{Void}), bytestring(winName), mat.handle)
end

function waitKey(delay::Int)
	ccall( (:waitKey, "../libcv2"), Void, (Int32,), delay)
end
