#include "cv2.h"

#include <stdio.h>
using namespace cv;

JMat* imread(char *filename)
{
    cv::Mat img = cv::imread(filename);
    static JMat* tempMat = (struct JMat*)malloc(sizeof(struct JMat));

    if( img.empty())
    {
         std::cout<<"Can't load image "<<std::endl;
    }
    else {
        tempMat->cols = img.cols;
        tempMat->rows = img.rows;
        mat2JMat(img, tempMat);
    }
    return tempMat;
}

void imshow(char *winName, JMat* mat){
    //hardcode here.
    cv::Mat image;
    image.create(mat->rows, mat->cols, CV_8UC3);
    JMat2Mat(mat, image);
    cv::imshow(winName, image);
}

void waitKey(int delay)
{
    cv::waitKey(delay);
}

/* dst = src */
void JMat2Mat(JMat *src, cv::Mat &dst)
{
    dst.create(src->rows, src->cols, CV_8UC3);
    const uchar* sptr = src->data;

    //data copy using memcpy function
    memcpy(dst.data, sptr, sizeof(unsigned char)*src->rows*src->cols*3);
    return;
}

void mat2JMat(cv::Mat &src, JMat *dst)
{
    const uchar* sptr = src.data;

    dst->data = (uchar*)malloc(sizeof(unsigned char)*src.rows*src.cols*src.elemSize());
    //data copy using memcpy function
    memcpy(dst->data, sptr, sizeof(unsigned char)*src.rows*src.cols*src.elemSize());
    return;
}

void copyTo(cv::Mat &src, cv::Mat &dst)
{
    dst.create(src.rows, src.cols, src.type());

    if( src.rows > 0 && src.cols > 0 )
    {
        const uchar* sptr = src.data;
        uchar* dptr = dst.data;

        size_t len = src.rows*src.elemSize();
        //data copy using memcpy function
        memcpy(dst.data, sptr, sizeof(unsigned char)*src.rows*src.cols*src.elemSize());
    }
    return;
}
