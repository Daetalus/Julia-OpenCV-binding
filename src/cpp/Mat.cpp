#include "Mat.h"
#include "iostream"

using namespace std;
// Mat function
//=============
// C++: Mat::Mat();
// Done
cv::Mat* createMat1()
{
    cv::Mat *mat = new cv::Mat();
    return mat;
}

// C++: Mat::Mat(int rows, int cols, int type);
// Done
cv::Mat* createMat2(int rows, int cols, int type)
{
    cv::Mat *mat = new cv::Mat(rows, cols, type);
    return mat;
}
/*
// C++: Mat::Mat(Size size, int type);
cv::Mat* createMat3(cv::Size size, int type)
{
}
*/
// C++: Mat::Mat(int rows, int cols, int type, Scalar s);
cv::Mat* createMat4(int rows, int cols, int type, cv::Scalar s)
{
}
/*
// C++: Mat::Mat(Size size, int type, Scalar s);
cv::Mat* createMat5(cv::Size size, int type, cv::Scalar s)
{
}

// C++: Mat::Mat(Mat m, Range rowRange, Range colRange = Range::all(););
cv::Mat* createMat6(cv::Mat m, cv::Range rowRange, cv::Range colRange)
{
}

// javadoc: Mat::Mat(m, rowRange);
cv::Mat* createMat7(cv::Mat m, cv::Range cv::rowRange)
{
}

// C++: Mat::Mat(Mat m, Rect roi);
cv::Mat* createMat8(cv::Mat m, Rect roi)
{
}
*/
// C++: Mat Mat::adjustROI(int dtop, int dbottom, int dleft, int dright);
cv::Mat* adjustROI(cv::Mat *mat, int dtop, int dbottom, int dleft, int dright)
{
    cv::Mat *ROIimage = new cv::Mat(mat->adjustROI(dtop, dbottom, dleft, dright));
    return ROIimage;
}

// C++: void Mat::assignTo(Mat m, int type = -1);
void assignTo1(cv::Mat m, int type)
{
}
    
// javadoc: Mat::assignTo(m);
void assignTo2(cv::Mat m)
{
}

// C++: int Mat::channels();
int channels(cv::Mat* mat)
{
    return mat->channels();
}

int at(cv::Mat *mat, int channel, int i, int j)
{
    cv::Vec3b data = mat->at<cv::Vec3b>(i, j);
    // julia count from one, C++ count from zero
    return data[channel - 1];
}
// C++: int Mat::checkVector(int elemChannels, int depth = -1, bool
    
// requireContinuous = true);
int checkVector1(int elemChannels, int depth, bool requireContinuous)
{
}
    
// javadoc: Mat::checkVector(elemChannels, depth);
int checkVector2(int elemChannels, int depth)
{
}
    
// javadoc: Mat::checkVector(elemChannels);
int checkVector3(int elemChannels)
{
}

// C++: Mat Mat::clone();
cv::Mat* cloneInWrap(cv::Mat *mat)
{
    cv::Mat *cloneMat = new cv::Mat(mat->clone());
    return cloneMat;
}

// C++: Mat Mat::col(int x);
cv::Mat* col(int x)
{
}

// C++: Mat Mat::colRange(int startcol, int endcol);
cv::Mat* colRange1(int startcol, int endcol)
{
}
/*
// C++: Mat Mat::colRange(Range r);
cv::Mat* colRange2(cv::Range r)
{
}
*/
// C++: int Mat::dims();
int dims(cv::Mat *mat)
{
    return mat->dims;
}

// C++: int Mat::cols();
int cols(cv::Mat *mat)
{
    return mat->cols;
}

// C++: void Mat::convertTo(Mat& m, int rtype, double alpha = 1, double beta
// = 0);
void convertTo1(cv::Mat m, int rtype, double alpha, double beta);
    
// javadoc: Mat::convertTo(m, rtype, alpha);
void convertTo2(cv::Mat m, int rtype, double alpha);
    
// javadoc: Mat::convertTo(m, rtype);
void convertTo3(cv::Mat m, int rtype)
{
}

// C++: void Mat::copyTo(Mat& m);
void copyTo1(cv::Mat m)
{
}

// C++: void Mat::copyTo(Mat& m, Mat mask);
void copyTo2(cv::Mat m, cv::Mat mask)
{
}

// C++: void Mat::create(int rows, int cols, int type);
void create1(int rows, int cols, int type)
{
}

// C++: void Mat::create(Size size, int type);
void create2(cv::Size size, int type)
{
}
/*
// C++: Mat Mat::cross(Mat m);
cv::Mat* cross(cv::Mat m)
{
}
*/
// C++: long Mat::dataAddr();
long dataAddr()
{
}

// C++: int Mat::depth();
int depth(cv::Mat* mat)
{
    return mat->depth();
}

// C++: Mat Mat::diag(int d = 0);
cv::Mat* diag1(int d);
    
// javadoc: Mat::diag();
cv::Mat* diag2()
{
}

// C++: static Mat Mat::diag(Mat d);
/*
    public static Mat diag(Mat d);
Mat retVal = new Mat(n_diag(d.nativeObj););
*/
/*
// C++: double Mat::dot(Mat m);
double dot(cv::Mat m)
{
}
*/
// C++: size_t Mat::elemSize();
long elemSize()
{
}

// C++: size_t Mat::elemSize1();
long elemSize1()
{
}

// C++: bool Mat::empty();
bool empty(cv::Mat *mat)
{
    return mat->empty();
}

/*

// C++: static Mat Mat::eye(int rows, int cols, int type);
    public static Mat eye(int rows, int cols, int type)
{
}

// C++: static Mat Mat::eye(Size size, int type);
javadoc: Mat::eye(size, type);
    public static Mat eye(Size size, int type);
Mat retVal = new Mat(n_eye(size.width, size.height, type););
*/

// C++: Mat Mat::inv(int method = DECOMP_LU);
cv::Mat* inv1(int method);
    
// javadoc: Mat::inv();
cv::Mat* inv2()
{
}

// C++: bool Mat::isContinuous();
bool isContinuous()
{
}

// C++: bool Mat::isSubmatrix();
bool isSubmatrix()
{
}

// C++: void Mat::locateROI(Size wholeSize, Point ofs);
void locateROI(cv::Size wholeSize, cv::Point ofs)
{
}
/*
// C++: Mat Mat::mul(Mat m, double scale = 1);
cv::Mat* mul1(cv::Mat m, double scale)
{
}

// javadoc: Mat::mul(m);
cv::Mat* mul2(cv::Mat m)
{
}
*/
/*

// C++: static Mat Mat::ones(int rows, int cols, int type);
    public static Mat ones(int rows, int cols, int type);
Mat retVal = new Mat(n_ones(rows, cols, type);)
{
}

// C++: static Mat Mat::ones(Size size, int type);
javadoc: Mat::ones(size, type);
    public static Mat ones(Size size, int type);
Mat retVal = new Mat(n_ones(size.width, size.height, type););
*/

// C++: void Mat::push_back(Mat m);
void push_back(cv::Mat m)
{
}

// C++: void Mat::release();
void release()
{
}

// C++: Mat Mat::reshape(int cn, int rows = 0);
cv::Mat* reshape1(int cn, int rows);
    
// javadoc: Mat::reshape(cn);
cv::Mat* reshape2(int cn)
{
}

// C++: Mat Mat::row(int y);
cv::Mat* row(int y)
{
}

// C++: Mat Mat::rowRange(int startrow, int endrow);
cv::Mat* rowRange1(int startrow, int endrow)
{
}
/*
// C++: Mat Mat::rowRange(Range r);
cv::Mat* rowRange2(Range r)
{
}
*/
// C++: int Mat::rows();
int rows(cv::Mat *mat)
{
    return mat->rows;
}
/*
// C++: Mat Mat::operator =(Scalar s);
cv::Mat* setTo1(cv::Scalar s)
{
}

// C++: Mat Mat::setTo(Scalar value, Mat mask = Mat(););
cv::Mat* setTo2(cv::Scalar value, cv::Mat mask)
{
}

// C++: Mat Mat::setTo(Mat value, Mat mask = Mat(););
cv::Mat* setTo3(cv::Mat value, cv::Mat mask)
{
}

// javadoc: Mat::setTo(value);
cv::Mat* setTo4(cv::Mat value)
{
}
*/
// C++: Size Mat::size();
cv::Size size()
{
}

// C++: size_t Mat::step1(int i = 0);
long step11(int i)
{
}
    
// javadoc: Mat::step1();
long step12()
{
}

// C++: Mat Mat::operator();(int rowStart, int rowEnd, int colStart, int
    
// colEnd);
cv::Mat* submat1(cv::Mat *mat, int rowStart, int rowEnd, int colStart, int colEnd)
{
    cv::Mat *subMat = new cv::Mat(mat->operator()(cv::Range(rowStart, rowEnd), cv::Range(colStart, colEnd)));
    return subMat;
}
/*
// C++: Mat Mat::operator();(Range rowRange, Range colRange);
cv::Mat* submat2(cv::Range rowRange, cv::Range colRange)
{
}

// C++: Mat Mat::operator();(Rect roi);
cv::Mat* submat3(cv::Rect roi)
{
}

// C++: Mat Mat::t();
cv::Mat* t()
{
}
*/
// C++: size_t Mat::total();
long total()
{
}

// C++: int Mat::type();
int type()
{
}

/*

// C++: static Mat Mat::zeros(int rows, int cols, int type);
javadoc: Mat::zeros(rows, cols, type);
    public static Mat zeros(int rows, int cols, int type);
Mat retVal = new Mat(n_zeros(rows, cols, type);)
{
}

// C++: static Mat Mat::zeros(Size size, int type);
javadoc: Mat::zeros(size, type);
    public static Mat zeros(Size size, int type);
Mat retVal = new Mat(n_zeros(size.width, size.height, type););
*/

