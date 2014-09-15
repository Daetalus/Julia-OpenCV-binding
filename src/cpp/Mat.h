#ifndef MAT_H
#define MAT_H

#include "opencv2/core/core.hpp"

// Mat function
//=============
// C++: Mat::Mat();
// Done
extern "C" cv::Mat* createMat1();

// C++: Mat::Mat(int rows, int cols, int type);
// Done
extern "C" cv::Mat* createMat2(int rows, int cols, int type);

// C++: Mat::Mat(Size size, int type);
extern "C" cv::Mat* createMat3(cv::Size size, int type);

// C++: Mat::Mat(int rows, int cols, int type, Scalar s);
extern "C" cv::Mat* createMat4(int rows, int cols, int type, cv::Scalar s);

// C++: Mat::Mat(Size size, int type, Scalar s);
extern "C" cv::Mat* createMat5(cv::Size size, int type, cv::Scalar s);

// C++: Mat::Mat(Mat m, Range rowRange, Range colRange = Range::all(););
extern "C" cv::Mat* createMat6(cv::Mat m, cv::Range rowRange, cv::Range colRange);
    
// javadoc: Mat::Mat(m, rowRange);
extern "C" cv::Mat* createMat7(cv::Mat m, cv::Range rowRange);

// C++: Mat::Mat(Mat m, Rect roi);
extern "C" cv::Mat* createMat8(cv::Mat m, cv::Rect roi);

// C++: Mat Mat::adjustROI(int dtop, int dbottom, int dleft, int dright);
// Impelemented, not test yet.
extern "C" cv::Mat* adjustROI(cv::Mat *mat, int dtop, int dbottom, int dleft, int dright);

// C++: void Mat::assignTo(Mat m, int type = -1);
// Done
extern "C" void assignTo(cv::Mat *dst, cv::Mat *src, int type);
    
// C++: int Mat::channels();
// Done
extern "C" int channels(cv::Mat *mat);

// C++: Mat Mat::clone();
// Done
extern "C" cv::Mat* cloneInWrap(cv::Mat *mat);

/*
// C++: Mat Mat::col(int x);
extern "C" cv::Mat* col(cv::Mat *mat, int x);

// C++: Mat Mat::colRange(int startcol, int endcol);
extern "C" cv::Mat* colRange1(int startcol, int endcol);

// C++: Mat Mat::colRange(Range r);
extern "C" cv::Mat* colRange2(cv::Range r);
*/

// C++: int Mat::dims();
// Done
extern "C" int dims(cv::Mat* mat);

// C++: int Mat::cols();
// Done
extern "C" int cols(cv::Mat *mat);

// C++: Mat::at();
// Done
extern "C" int at(cv::Mat *mat, int channel, int i, int j);

// C++: void Mat::convertTo(Mat& m, int rtype, double alpha = 1, double beta
// = 0);
// Done
extern "C" void convertTo(cv::Mat *dst, cv::Mat *src, int rtype, double alpha, double beta);
    
// C++: void Mat::copyTo(Mat& m);
// Done
extern "C" void copyTo(cv::Mat *dst, cv::Mat *src);

// C++: void Mat::copyTo(Mat& m, Mat mask);
// Done
extern "C" void copyTo2(cv::Mat *dst, cv::Mat *src, cv::Mat* mask);

// C++: void Mat::create(Size size, int type);
// TODO
extern "C" void create2(cv::Size size, int type);

// C++: Mat Mat::cross(Mat m);
extern "C" cv::Mat* cross(cv::Mat* mat1, cv::Mat *mat2);

// C++: long Mat::dataAddr();
extern "C" long dataAddr();

// C++: int Mat::depth();
// Done
extern "C" int depth(cv::Mat* mat);

// C++: Mat Mat::diag(int d = 0);
extern "C" cv::Mat* diag1(int d);
    
// javadoc: Mat::diag();
extern "C" cv::Mat* diag2();

// C++: static Mat Mat::diag(Mat d);
/*
    public static Mat diag(Mat d);
Mat retVal = new Mat(n_diag(d.nativeObj););
*/

// C++: double Mat::dot(Mat m);
// TODO, implemented, but could not verify the result
extern "C" double dot(cv::Mat *mat1, cv::Mat *mat2);

// C++: size_t Mat::elemSize();
// Done
extern "C" long elemSize(cv::Mat *mat);

// C++: size_t Mat::elemSize1();
// Done
extern "C" long elemSize1(cv::Mat *mat);

// C++: bool Mat::empty();
// Done
extern "C" bool empty(cv::Mat *mat);

// C++: static Mat Mat::eye(int rows, int cols, int type);
extern "C" cv::Mat* eye(int rows, int cols, int type);

/*
// C++: static Mat Mat::eye(Size size, int type);
extern "C" cv::Mat* eye(Size size, int type);
*/

// C++: Mat Mat::inv(int method = DECOMP_LU);
extern "C" cv::Mat* inv(cv::Mat *mat, int method);

// C++: bool Mat::isContinuous();
// Done
extern "C" bool isContinuous(cv::Mat *mat);

// C++: bool Mat::isSubmatrix();
extern "C" bool isSubmatrix();

// C++: void Mat::locateROI(Size wholeSize, Point ofs);
extern "C" void locateROI(cv::Size wholeSize, cv::Point ofs);

// C++: Mat Mat::mul(Mat m, double scale = 1);
extern "C" cv::Mat* mul1(cv::Mat *mat1, cv::Mat *mat2, double scale);
    
// javadoc: Mat::mul(m);
extern "C" cv::Mat* mul2(cv::Mat *mat1, cv::Mat *mat2);

/*
// C++: static Mat Mat::ones(int rows, int cols, int type);
extern "C" Mat ones(int rows, int cols, int type);

// C++: static Mat Mat::ones(Size size, int type);
extern "C" Mat ones(Size size, int type);
*/

// C++: void Mat::push_back(Mat m);
extern "C" void push_back(cv::Mat m);

// C++: void Mat::release();
extern "C" void release(cv::Mat *mat);

// C++: Mat Mat::reshape(int cn, int rows = 0);
extern "C" cv::Mat* reshape1(cv::Mat *mat, int cn, int rows);
    
// javadoc: Mat::reshape(cn);
extern "C" cv::Mat* reshape2(cv::Mat *mat, int cn);

/*
// C++: Mat Mat::row(int y);
extern "C" cv::Mat* row(int y);

// C++: Mat Mat::rowRange(int startrow, int endrow);
extern "C" cv::Mat* rowRange1(int startrow, int endrow);

// C++: Mat Mat::rowRange(Range r);
extern "C" cv::Mat* rowRange2(cv::Range r);
*/

// C++: int Mat::rows();
// Done
extern "C" int rows(cv::Mat *mat);

// C++: Mat Mat::operator =(Scalar s);
extern "C" cv::Mat* setTo1(cv::Scalar s);

// C++: Mat Mat::setTo(Scalar value, Mat mask = Mat(););
extern "C" cv::Mat* setTo2(cv::Scalar value, cv::Mat mask);

// C++: Mat Mat::setTo(Mat value, Mat mask = Mat(););
extern "C" cv::Mat* setTo3(cv::Mat value, cv::Mat mask);
    
// javadoc: Mat::setTo(value);
extern "C" cv::Mat* setTo4(cv::Mat value);

// C++: Size Mat::size();
    //public Size size();

// C++: size_t Mat::step1(int i = 0);
// Done, TODO, need verify
extern "C" long step1(cv::Mat *mat, int i);

// C++: Mat Mat::operator();(int rowStart, int rowEnd, int colStart, int
    
// colEnd);
extern "C" cv::Mat* submat1(cv::Mat *mat, int rowStart, int rowEnd, int colStart, int colEnd);

// C++: Mat Mat::operator();(Range rowRange, Range colRange);
extern "C" cv::Mat* submat2(cv::Range rowRange, cv::Range colRange);

// C++: Mat Mat::operator();(Rect roi);
extern "C" cv::Mat* submat3(cv::Rect roi);

// C++: Mat Mat::t();
extern "C" cv::Mat* t(cv::Mat *mat);

// C++: size_t Mat::total();
// Done
extern "C" long total(cv::Mat *mat);

// C++: int Mat::type();
// Done
extern "C" int type(cv::Mat *mat);


//C++: static Mat Mat::zeros(int rows, int cols, int type);
// Done
extern "C" cv::Mat* zeros(int rows, int cols, int type);

#endif 
// MAT_H
