#include "imgproc.h"
#include <iostream>

// Note: I put some function that not belong the imgproc module.
// This is just because I wrap those function in same time.
// TODO: Reconstruct the file, correct the module function

using namespace std;

cv::Point* setPoint(int x, int y)
{
    cv::Point *pt = new cv::Point(x, y);
    return pt;
}

cv::Mat** split(const cv::Mat *src)
{
    cv::Mat** imageArray = new cv::Mat*[src->channels()];
    cv::Mat imageArrayTemp[src->channels()];
    cv::split(*src, imageArrayTemp);

    for (int i = 0; i < src->channels(); i++)
    {
        imageArray[i] = new cv::Mat;
        imageArrayTemp[i].copyTo(*(imageArray[i]));
    }

    return imageArray;
}

cv::Mat* blur(cv::Mat *img, int *size, cv::Point *anchor, int borderType)
{
    cv::Mat *result = new cv::Mat();
    cv::blur(*img, *result, cv::Size(5, 5), *anchor, borderType);

    return result;
}

void polylines(cv::Mat *img, cv::Point **pts, int npts, bool isClosed, int *color, int thickness, int lineType, int shift)
{
    using namespace cv;
    vector<Point> contour;
    for (int i = 0; i < npts; i++)
        contour.push_back(*pts[i]);

    // create a pointer to the data as an array of points (via a conversion to 
    // a Mat() object)
    const cv::Point *ptsx = (const cv::Point*) Mat(contour).data;

    cv::polylines(*img, &ptsx, &npts, 1, isClosed, Scalar(color[0],  color[1], color[2]), thickness, lineType, shift);
}

int* calcHist(const cv::Mat** images, int nimages, const int* channels, cv::Mat *mask, int dims, const int* histSize, const double* ranges, bool uniform, bool accumulate)
{
    cv::Mat *hist = new cv::Mat();

    float* histRanges = new float[nimages];

    // multiple to 2 is because every image range has two value
    for (int i = 0; i < nimages * 2; i++)
        histRanges[i] = (float)ranges[i];

    const float* const_histRanges = histRanges;

    using namespace cv;
  
     // Compute the histograms:
    calcHist( *images, nimages, channels, *mask, *hist, 1, histSize, &const_histRanges, uniform, accumulate);  

    // Copy the histogram to an int array
    // TODO: use int as arrary's type is just for test, it will correct later

    int *histArray = new int[*histSize];
    float* data = hist->ptr<float>(0);
    for ( int i = 0; i < *histSize; i++)
        histArray[i] = *data++;
  
     return histArray;
}
