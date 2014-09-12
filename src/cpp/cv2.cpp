#include "cv2.h"
// include iostream header file for test
#include <iostream>

using namespace std;

cv::Mat* imread(char *filename)
{
    cv::Mat img = cv::imread(filename);
    cv::Mat *image = new Mat();
    img.copyTo(*image);

	return image;
}

void imshow(char *winName, Mat* mat)
{
	if (!mat->empty())
	{
		cv::imshow(winName, *mat);
	}
	else
	{
		cout << "Empty image" << endl;
	}
}

void waitKey(int delay)
{
    cv::waitKey(delay);
}


