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
extern "C" void assignTo1(cv::Mat m, int type);
    
// javadoc: Mat::assignTo(m);
extern "C" void assignTo2(cv::Mat m);

// C++: int Mat::channels();
// Done
extern "C" int channels(cv::Mat *mat);

// C++: int Mat::checkVector(int elemChannels, int depth = -1, bool
    
// requireContinuous = true);
extern "C" int checkVector1(int elemChannels, int depth, bool requireContinuous);
    
// javadoc: Mat::checkVector(elemChannels, depth);
extern "C" int checkVector2(int elemChannels, int depth);
    
// javadoc: Mat::checkVector(elemChannels);
extern "C" int checkVector3(int elemChannels);

// C++: Mat Mat::clone();
// Done
extern "C" cv::Mat* cloneInWrap(cv::Mat *mat);

// C++: Mat Mat::col(int x);
extern "C" cv::Mat* col(int x);

// C++: Mat Mat::colRange(int startcol, int endcol);
extern "C" cv::Mat* colRange1(int startcol, int endcol);

// C++: Mat Mat::colRange(Range r);
extern "C" cv::Mat* colRange2(cv::Range r);

// C++: int Mat::dims();
// Done
extern "C" int dims(cv::Mat* mat);

// C++: int Mat::cols();
// Done
extern "C" int cols(cv::Mat *mat);

// C++: Mat::at();
extern "C" int at(cv::Mat *mat, int channel, int i, int j);

// C++: void Mat::convertTo(Mat& m, int rtype, double alpha = 1, double beta
// = 0);
extern "C" void convertTo1(cv::Mat m, int rtype, double alpha, double beta);
    
// javadoc: Mat::convertTo(m, rtype, alpha);
extern "C" void convertTo2(cv::Mat m, int rtype, double alpha);
    
// javadoc: Mat::convertTo(m, rtype);
extern "C" void convertTo3(cv::Mat m, int rtype);

// C++: void Mat::copyTo(Mat& m);
extern "C" void copyTo1(cv::Mat m);

// C++: void Mat::copyTo(Mat& m, Mat mask);
extern "C" void copyTo2(cv::Mat m, cv::Mat mask);

// C++: void Mat::create(int rows, int cols, int type);
extern "C" void create1(int rows, int cols, int type);

// C++: void Mat::create(Size size, int type);
extern "C" void create2(cv::Size size, int type);

// C++: Mat Mat::cross(Mat m);
extern "C" cv::Mat* cross(cv::Mat m);

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
extern "C" double dot(cv::Mat m);

// C++: size_t Mat::elemSize();
extern "C" long elemSize();

// C++: size_t Mat::elemSize1();
extern "C" long elemSize1();

// C++: bool Mat::empty();
// Done
extern "C" bool empty(cv::Mat *mat);
/*

// C++: static Mat Mat::eye(int rows, int cols, int type);
    public static Mat eye(int rows, int cols, int type);

// C++: static Mat Mat::eye(Size size, int type);
javadoc: Mat::eye(size, type);
    public static Mat eye(Size size, int type);
Mat retVal = new Mat(n_eye(size.width, size.height, type););
*/

// C++: Mat Mat::inv(int method = DECOMP_LU);
extern "C" cv::Mat* inv1(int method);
    
// javadoc: Mat::inv();
extern "C" cv::Mat* inv2();

// C++: bool Mat::isContinuous();
extern "C" bool isContinuous();

// C++: bool Mat::isSubmatrix();
extern "C" bool isSubmatrix();

// C++: void Mat::locateROI(Size wholeSize, Point ofs);
extern "C" void locateROI(cv::Size wholeSize, cv::Point ofs);

// C++: Mat Mat::mul(Mat m, double scale = 1);
extern "C" cv::Mat* mul1(cv::Mat m, double scale);
    
// javadoc: Mat::mul(m);
extern "C" cv::Mat* mul2(cv::Mat m);
/*

// C++: static Mat Mat::ones(int rows, int cols, int type);
    public static Mat ones(int rows, int cols, int type);
Mat retVal = new Mat(n_ones(rows, cols, type););

// C++: static Mat Mat::ones(Size size, int type);
javadoc: Mat::ones(size, type);
    public static Mat ones(Size size, int type);
Mat retVal = new Mat(n_ones(size.width, size.height, type););
*/

// C++: void Mat::push_back(Mat m);
extern "C" void push_back(cv::Mat m);

// C++: void Mat::release();
extern "C" void release();

// C++: Mat Mat::reshape(int cn, int rows = 0);
extern "C" cv::Mat* reshape1(int cn, int rows);
    
// javadoc: Mat::reshape(cn);
extern "C" cv::Mat* reshape2(int cn);

// C++: Mat Mat::row(int y);
extern "C" cv::Mat* row(int y);

// C++: Mat Mat::rowRange(int startrow, int endrow);
extern "C" cv::Mat* rowRange1(int startrow, int endrow);

// C++: Mat Mat::rowRange(Range r);
extern "C" cv::Mat* rowRange2(cv::Range r);

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
extern "C" long step11(int i);
    
// javadoc: Mat::step1();
extern "C" long step12();

// C++: Mat Mat::operator();(int rowStart, int rowEnd, int colStart, int
    
// colEnd);
extern "C" cv::Mat* submat1(cv::Mat *mat, int rowStart, int rowEnd, int colStart, int colEnd);

// C++: Mat Mat::operator();(Range rowRange, Range colRange);
extern "C" cv::Mat* submat2(cv::Range rowRange, cv::Range colRange);

// C++: Mat Mat::operator();(Rect roi);
extern "C" cv::Mat* submat3(cv::Rect roi);

// C++: Mat Mat::t();
extern "C" cv::Mat* t();

// C++: size_t Mat::total();
extern "C" long total();

// C++: int Mat::type();
extern "C" int type();
/*

// C++: static Mat Mat::zeros(int rows, int cols, int type);
javadoc: Mat::zeros(rows, cols, type);
    public static Mat zeros(int rows, int cols, int type);
Mat retVal = new Mat(n_zeros(rows, cols, type););

// C++: static Mat Mat::zeros(Size size, int type);
javadoc: Mat::zeros(size, type);
    public static Mat zeros(Size size, int type);
Mat retVal = new Mat(n_zeros(size.width, size.height, type););
*/
#endif 
// MAT_H
