#ifndef CV2_H
#define CV2_H

#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"

using namespace cv;


extern "C" cv::Mat* imread(char *filename);
extern "C" void imshow(char *winName, Mat *mat);
extern "C" void waitKey(int delay);

#endif 
// CV2_H
