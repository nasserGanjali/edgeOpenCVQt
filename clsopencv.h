#ifndef CLSOPENCV_H
#define CLSOPENCV_H


//#include "opencv2/"
#include "opencv2/imgproc/imgproc.hpp"
//#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <stdio.h>

using namespace cv;
using namespace std;


class clsOpencv
{
public:
    clsOpencv();
    int edgeThresh = 1;
    Mat image, gray, edge, cedge;

    void onTrackbar(int, void*);
    Mat main();
};

#endif // CLSOPENCV_H
