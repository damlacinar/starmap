/* Damla Cinar 09/08/2020
Locating a Deﬁned Area in the Star Map using C++, OpenCV, OS:Linux
-------------------------------------------------------------------
In this work template matching technique is used in order to find the cropped area (small_area.png) from the main image StarMap.png
The code works with the rotated image too. */

#include "library.h"

int main(int argc, char **argv) {
    img = imread("/Users/damla/Projects/Damla/StarMap.png", IMREAD_COLOR); // StarMap.png is the source image where it is expected to find a match to the template image
    templ = imread("/Users/damla/Projects/Damla/Small_area.png", IMREAD_COLOR); // small_area.png is the template image which will be compared/searched within the source image
    //templ = imread("/Users/damla/Projects/Damla/Small_area_rotated.png", IMREAD_COLOR); // rotated image

    if (img.empty() || templ.empty()) {
        cout << "Can't read one of the images" << endl;
        return EXIT_FAILURE;
    }
    
    namedWindow(image_window, WINDOW_AUTOSIZE);
    namedWindow(result_window, WINDOW_AUTOSIZE);
    
    // in OpenCV there are 6 template matching methods, the SQDIFF method is chosen here as it is the best resulting one.
    match_method = TM_SQDIFF;

    MatchingMethod(0, 0);
    waitKey(0);
    return EXIT_SUCCESS;
}

void MatchingMethod(int, void *) {
    Mat img_display;
    img.copyTo(img_display);
    
    /* To identify the matching area, the template image is compared against the source image by sliding it
    The goal is to detect the highest matching area */
    
    int result_cols = img.cols - templ.cols + 1;
    int result_rows = img.rows - templ.rows + 1;
    
    result.create(result_rows, result_cols, CV_32FC1);

    matchTemplate(img, templ, result, match_method);

    normalize(result, result, 0, 1, NORM_MINMAX, -1, Mat());
    double minVal;
    double maxVal;
    Point minLoc;
    Point maxLoc;
    Point matchLoc;
    minMaxLoc(result, &minVal, &maxVal, &minLoc, &maxLoc, Mat());
    
    matchLoc = minLoc;
    
    /* Following part of the code identifies and marks the 4 point positions in the Star Map
    each corresponding to small images’ corner points, displayed as white dots */
    
    circle(img_display, matchLoc, 2, Scalar(255,255,255), 4, 8, 0);
    circle(img_display, Point(matchLoc.x + templ.cols, matchLoc.y), 2, Scalar(255,255,255), 4, 8, 0);
    circle(img_display, Point(matchLoc.x, matchLoc.y + templ.rows), 2, Scalar(255,255,255), 4, 8, 0);
    circle(img_display, Point(matchLoc.x + templ.cols, matchLoc.y + templ.rows), 2, Scalar(255,255,255), 4, 8, 0);

    circle(result, matchLoc, 2, Scalar(255,255,255), 4, 8, 0);
    circle(result, Point(matchLoc.x + templ.cols, matchLoc.y), 2, Scalar(255,255,255), 4, 8, 0);
    circle(result, Point(matchLoc.x, matchLoc.y + templ.rows), 2, Scalar(255,255,255), 4, 8, 0);
    circle(result, Point(matchLoc.x + templ.cols, matchLoc.y + templ.rows), 2, Scalar(255,255,255), 4, 8, 0);
    
    // show the result StarMap.png image with 4 white dots that are corresponding to the corners of the smallarea.png image
    imshow(image_window, img_display);
    imshow(result_window, result);
}
