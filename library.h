#ifndef UNTITLED_LIBRARY_H
#define UNTITLED_LIBRARY_H

#include <iostream>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"

using namespace std;
using namespace cv;

Mat img;
Mat templ;
Mat result;
const char *image_window = "Source Image";
const char *result_window = "Result window";
int match_method;
int max_Trackbar = 5;

int main(int argc, char **argv);

void MatchingMethod(int, void *);

#endif //UNTITLED_LIBRARY_H
