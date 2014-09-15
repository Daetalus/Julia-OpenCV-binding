include("../src/OpenCV.jl")

img = cv2.imread("/home/sunny/workspace/image.jpg")
#emptyImage = cv2.Mat(255,255,3)
#subMat = cv2.subMatrix(img, cv2.cvRange(50, 100), cv2.cvRange(50, 100))
#cv2.imshow("Sub Matrix", subMat)

#emptyImage = cv2.create(255,255,3)
#cv2.imshow("Sub Matrix", emptyImage)

# TODO, need further test!
#result = cv2.cross(img, img)
#cv2.imshow("Crossed Image", result)

#dotResult = cv2.dot(img, img)
#println(dotResult)

#println(cv2.elemSize(img))
#println(cv2.elemSize1(img))

#eyeMat = cv2.eye(100,100,3)
#cv2.imshow("Eye", eyeMat)

# TODO, need further test!
#inversed = cv2.inv(img)
#cv2.imshow("Inv", inversed)

println(cv2.step1(img))
println(cv2.isContinuous(img))

println(cv2.total(img))
println(cv2.matType(img))
#ROI = cv2.adjustROI(img, 0, 100, 100, 100)
#cv2.imshow("ROI", ROI)

#clonedImage = cv2.clone(img)
#cv2.imshow("Cloned image", clonedImage)

#emptyImage2 = cv2.Mat()
#cv2.imshow("Empty Image 2", emptyImage2)
#cv2.imshow("Empty Image", emptyImage)

#imageTwo = cv2.Mat()
#cv2.assignTo(imageTwo, img)
#cv2.imshow("Assigned Image", imageTwo)

#imageThree = cv2.Mat()
#cv2.convertTo(imageThree, img, -1)
#cv2.imshow("Converted Image", imageThree)

#imageFour = cv2.Mat()
#cv2.copyTo(imageFour, img)
#cv2.imshow("Copied, Image", imageFour)

#image5 = cv2.Mat()
#mask = cv2.Mat()
#cv2.copyTo(image5, img, mask)
#cv2.imshow("Copied Image 2", image5)

#println(cv2.channels(img))
#println(subMat[2, 20, 20])
println(string("Image dimension ", cv2.dims(img)))
println(string("Image cols number: ", cv2.cols(img)))
println(string("Image rows number: ", cv2.rows(img)))
println(string("Image is empty? ", cv2.empty(img)))
println(cv2.depth(img))
cv2.imshow("Image Window", img)
cv2.waitKey(0)
