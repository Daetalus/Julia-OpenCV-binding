module cv2

export cv2

include("./Mat.jl")
include("./highgui.jl")

export
# type Mat
    Mat,
    depth,
    subMatrix,
    channels,
    dims,
    cols,
    rows,
    empty,
    clone,
    adjustROI,

# highgui
    imread,
    imshow,
    waitKey

end

println("Hello")
img = cv2.imread("/home/sunny/workspace/image.jpg")
