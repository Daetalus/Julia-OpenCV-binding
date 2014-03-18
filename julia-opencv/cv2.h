#ifndef CV2_H
#define CV2_H

#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <iostream>


typedef struct JMat
{
    //! the number of rows and columns or (-1, -1) when the matrix has more than 2 dimensions
    int rows, cols;
    //! pointer to the data
    uchar* data;
    //More
}JMat;

void JMat2Mat(JMat *src, cv::Mat &dst);
void mat2JMat(cv::Mat &src, JMat *dst);

extern "C" JMat* imread(char *filename);
extern "C" void imshow(char *winName, struct JMat* jmat_c);
extern "C" void waitKey(int delay);

#endif // CV2_H
