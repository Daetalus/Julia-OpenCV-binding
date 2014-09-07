module cv2

export cv2

immutable Mat
	handle::Ptr{Void}
end

function imread(filename::String)
	hnd =  ccall( (:imread, "../libcv2"), Ptr{Void},(Ptr{Uint8},), bytestring(filename))
	return hnd
end

function imshow(winName::String, mat::Ptr{Void})
	ccall( (:imshow, "../libcv2"), Void, (Ptr{Uint8}, Ptr{Void}), bytestring(winName), mat)
end

function waitKey(delay::Int32)
	ccall( (:waitKey, "../libcv2"), Void, (Int32,), delay)
end
end

img = cv2.imread("/home/sunny/workspace/image.jpg")
cv2.imshow("Image Window", img)
cv2.waitKey(0)
