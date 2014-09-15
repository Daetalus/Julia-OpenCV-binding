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
cv::Mat* createMat6(cv::Mat *m, cv::Range rowRange, cv::Range colRange)
{
}

// Mat::Mat(m, rowRange);
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
void assignTo(cv::Mat *dst, cv::Mat *src, int type)
{
    src->assignTo(*dst, type);
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

// C++: Mat Mat::clone();
cv::Mat* cloneInWrap(cv::Mat *mat)
{
    cv::Mat *cloneMat = new cv::Mat(mat->clone());
    return cloneMat;
}

// C++: Mat Mat::col(int x);
// Could not solve it...
cv::Mat* col(cv::Mat *mat, int x)
{
    //return &(mat->col(x));
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
void convertTo(cv::Mat *dst, cv::Mat *src, int rtype, double alpha, double beta)
{
    src->convertTo(*dst, rtype, alpha, beta);
}

// C++: void Mat::copyTo(Mat& m);
void copyTo(cv::Mat *dst, cv::Mat *src)
{
    src->copyTo(*dst);
}

// C++: void Mat::copyTo(Mat& m, Mat mask);
void copyTo2(cv::Mat *dst, cv::Mat *src, cv::Mat *mask)
{
    src->copyTo(*dst, *mask);
}

// C++: void Mat::create(Size size, int type);
void create2(cv::Size size, int type)
{
}

// C++: Mat Mat::cross(Mat m);
//TODO
cv::Mat* cross(cv::Mat *mat1, cv::Mat *mat2)
{
    cv::Mat *result = new cv::Mat();
    //*result = mat1->cross(*mat2);
    return result;
}

// C++: int Mat::depth();
// Done
int depth(cv::Mat* mat)
{
    return mat->depth();
}

/*
// C++: Mat Mat::diag(int d = 0);
cv::Mat* diag1(int d);
    
*/

// C++: static Mat Mat::diag(Mat d);
/*
    public static Mat diag(Mat d);
Mat retVal = new Mat(n_diag(d.nativeObj););
*/

// C++: double Mat::dot(Mat m);
// Done
double dot(cv::Mat *mat1, cv::Mat *mat2)
{
    return mat1->dot(*mat2);
}

// C++: size_t Mat::elemSize();
// Done
long elemSize(cv::Mat *mat)
{
    // TODO: does long is nessesary?
    return (long)(mat->elemSize());
}

// C++: size_t Mat::elemSize1();
long elemSize1(cv::Mat *mat)
{
    // TODO: does long is nessesary?
    return (long)(mat->elemSize1());
}

// C++: bool Mat::empty();
// Done
bool empty(cv::Mat *mat)
{
    return mat->empty();
}

// C++: static Mat Mat::eye(int rows, int cols, int type);
// TODO: need to verify. Matexpr
cv::Mat* eye(int rows, int cols, int type)
{
    cv::Mat *eyeMat = new cv::Mat();
    *eyeMat = cv::Mat::eye(rows, cols, type);
    return eyeMat;
}

/*
// C++: static Mat Mat::eye(Size size, int type);
*/

// C++: Mat Mat::inv(int method = DECOMP_LU);
cv::Mat* inv(cv::Mat *mat, int method)
{
    cv::Mat *inversedMat = new cv::Mat();
    // TODO, need more test!
    //*inversedMat = mat->inv(method);
    return inversedMat;
}

// C++: bool Mat::isContinuous();
bool isContinuous(cv::Mat *mat)
{
    return mat->isContinuous();
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

*/

/*
// C++: static Mat Mat::ones(int rows, int cols, int type);
cv::Mat* ones(int rows, int cols, int type)
{
}

// C++: static Mat Mat::ones(Size size, int type);
cv::Mat*  ones(Size size, int type)
{
}
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
cv::Mat* reshape1(int cn, int rows)
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
*/

// C++: Size Mat::size();
cv::Size size(cv::Mat *mat)
{
}

// C++: size_t Mat::step1(int i = 0);
long step1(cv::Mat *mat, int i)
{
    return mat->step1();
}
    
// javadoc: Mat::step1();
long step12(cv::Mat *mat)
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
// Done
long total(cv::Mat *mat)
{
    //TODO return long is correct?
    return mat->total();
}

// C++: int Mat::type();
// Done, TODO: need further verify
int type(cv::Mat *mat)
{
    return mat->type();
}

// C++: static Mat Mat::zeros(int rows, int cols, int type);
cv::Mat* zeros(int rows, int cols, int type)
{
    cv::Mat *zeros = new cv::Mat();
    *zeros = cv::Mat::zeros(rows, cols, type);
    return zeros;
}

/*
// C++: static Mat Mat::zeros(Size size, int type);
cv::Mat* Mat zeros(Size size, int type)
{
}
*/
