include("../src/OpenCV.jl")

img = cv2.imread("/home/sunny/workspace/image.jpg")
#emptyImage = cv2.Mat(255,255,3)
subMat = cv2.subMatrix(img, cv2.cvRange(50, 100), cv2.cvRange(50, 100))
cv2.imshow("Sub Matrix", subMat)
#ROI = cv2.adjustROI(img, 0, 100, 100, 100)
#cv2.imshow("ROI", ROI)
#clonedImage = cv2.clone(img)
#cv2.imshow("Cloned image", clonedImage)
#emptyImage2 = cv2.Mat()
#cv2.imshow("Empty Image 2", emptyImage2)
#cv2.imshow("Empty Image", emptyImage)
println(cv2.channels(img))
println(subMat[2, 20, 20])
println(string("Image dimension ", cv2.dims(img)))
println(string("Image cols number: ", cv2.cols(img)))
println(string("Image rows number: ", cv2.rows(img)))
println(string("Image is empty? ", cv2.empty(img)))
println(cv2.depth(img))
cv2.imshow("Image Window", img)
cv2.waitKey(0)