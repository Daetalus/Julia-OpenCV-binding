#ifndef IMGPROC_H
#define IMGPROC_H

#include "opencv2/core/core.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"

extern "C" cv::Point* setPoint(int x, int y);

// C++: void polylines(Mat& img, const Point** pts, const int* npts, int ncontours, bool isClosed, const Scalar& color, int thickness=1, int lineType=8, int shift=0 )
extern "C" void polylines(cv::Mat *img, cv::Point **pts, int npts, bool isClosed, int *color, int thickness, int lineType, int shift);

// C++: void calcHist(const Mat* images, int nimages, const int* channels, InputArray mask, OutputArray hist, int dims, const int* histSize, const float** ranges, bool uniform=true, bool accumulate=false )
extern "C" int* calcHist(const cv::Mat** images, int nimages, const int* channels, cv::Mat *mask, int dims, const int* histSize, const double* ranges, bool uniform, bool accumulate);

// C++: void split(const Mat& src, Mat* mvbegin)
extern "C" cv::Mat** split(const cv::Mat *src);
#endif
