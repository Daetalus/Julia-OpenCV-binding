module cv2

export cv2

function imread(filename::String)
    hnd = ccall((:imread,"./libcv2"),Ptr{Void},(Ptr{Uint8},), bytestring(filename))
    println(hnd)
    return hnd
end

function imshow(winName::String, mat::Ptr{Void})
    println(mat)
    ccall((:imshow, "./libcv2"), Void, (Ptr{Uint8}, Ptr{Void}), bytestring(winName), mat)
end

function waitKey(delay::Int64)
    ccall((:waitKey, "./libcv2"), Void, (Int64,), delay)
end
end

img = cv2.imread("/home/sunny/workspace/Earth_Mars_Comparison.jpg")
cv2.imshow("test", img)
cv2.waitKey(0)