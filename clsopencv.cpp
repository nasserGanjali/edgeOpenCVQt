#include "clsopencv.h"

clsOpencv::clsOpencv()
{
}

// define a trackbar callback
void clsOpencv::onTrackbar(int, void*)
{
    blur(gray, edge, Size(3,3));
    // Run the edge detector on grayscale
    Canny(edge, edge, edgeThresh, edgeThresh*3, 3);
    cedge = Scalar::all(0);
    image.copyTo(cedge, edge);
    //imshow("Edge map", cedge);
}

Mat clsOpencv::main()
{
    string filename = "image.jpeg";
    image = imread(filename, 1);
    if(image.empty())
    {
        printf("Cannot read image file: %s\n", filename.c_str());
    }
    cedge.create(image.size(), image.type());
    cvtColor(image, gray, COLOR_BGR2GRAY);
    // Create a window
    //namedWindow("Edge map", 1);
    // create a toolbar
    //createTrackbar("Canny threshold", "Edge map", &edgeThresh, 100, onTrackbar);
    // Show the image
    onTrackbar(0, 0);
    // Wait for a key stroke; the same function arranges events processing
//    printf("image size :%d\n",cedge.);
    return cedge;
}
