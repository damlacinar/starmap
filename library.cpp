#include "library.h"

int main(int argc, char **argv) {
    img = imread("/Users/damla/Projects/Damla/StarMap.png", IMREAD_COLOR);
    templ = imread("/Users/damla/Projects/Damla/Small_area.png", IMREAD_COLOR);
    //templ = imread("/Users/damla/Projects/Damla/Small_area_rotated.png", IMREAD_COLOR);

    if (img.empty() || templ.empty()) {
        cout << "Can't read one of the images" << endl;
        return EXIT_FAILURE;
    }
    namedWindow(image_window, WINDOW_AUTOSIZE);
    namedWindow(result_window, WINDOW_AUTOSIZE);

    match_method = TM_SQDIFF;

    MatchingMethod(0, 0);

    waitKey(0);
    return EXIT_SUCCESS;
}

void MatchingMethod(int, void *) {
    Mat img_display;
    img.copyTo(img_display);
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

    if (match_method == TM_SQDIFF || match_method == TM_SQDIFF_NORMED) { matchLoc = minLoc; }
    else { matchLoc = maxLoc; }

    circle(img_display, matchLoc, 2, Scalar(0,255,0), 4, 8, 0);
    circle(img_display, Point(matchLoc.x + templ.cols, matchLoc.y), 2, Scalar(0,255,0), 4, 8, 0);
    circle(img_display, Point(matchLoc.x, matchLoc.y + templ.rows), 2, Scalar(0,255,0), 4, 8, 0);
    circle(img_display, Point(matchLoc.x + templ.cols, matchLoc.y + templ.rows), 2, Scalar(0,255,0), 4, 8, 0);

    circle(result, matchLoc, 2, Scalar(0,255,0), 4, 8, 0);
    circle(result, Point(matchLoc.x + templ.cols, matchLoc.y), 2, Scalar(0,255,0), 4, 8, 0);
    circle(result, Point(matchLoc.x, matchLoc.y + templ.rows), 2, Scalar(0,255,0), 4, 8, 0);
    circle(result, Point(matchLoc.x + templ.cols, matchLoc.y + templ.rows), 2, Scalar(0,255,0), 4, 8, 0);

    imshow(image_window, img_display);
    imshow(result_window, result);
}
