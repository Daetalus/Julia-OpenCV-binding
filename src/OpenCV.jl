module cv2

export cv2

include("./Mat.jl")
include("./highgui.jl")
include("./imgproc.jl")

const CV_8UC1 = 0
const CV_8UC2 = 8
const CV_8UC3 = 16
const CV_8UC4 = 24
const CV_8SC1 = 1
const CV_8SC2 = 9
const CV_8SC3 = 17
const CV_8SC4 = 25
const CV_16UC1 = 2
const CV_16UC2 = 10
const CV_16UC3 = 18
const CV_16UC4 = 26
const CV_16SC1 = 3
const CV_16SC2 = 11
const CV_16SC3 = 19
const CV_16SC4 = 27
const CV_32SC1 = 4
const CV_32SC2 = 12
const CV_32SC3 = 20
const CV_32SC4 = 28
const CV_32FC1 = 5
const CV_32FC2 = 13
const CV_32FC3 = 21
const CV_32FC4 = 29
const CV_64FC1 = 6
const CV_64FC2 = 14
const CV_64FC3 = 22
const CV_64FC4 = 30



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
    convertTo,
    cross,
    inv,

# highgui
    imread,
    imshow,
    waitKey

end
