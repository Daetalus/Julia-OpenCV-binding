include("../src/OpenCV.jl")

img = cv2.imread("/home/sun/workspace/Lena.jpg")

result = cv2.blur(img, (5, 5))

cv2.imshow("HistImage", img)
cv2.imshow("Blur", result)

cv2.waitKey(0)
