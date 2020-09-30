#include<iostream>
#include <opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main()
{
	Mat srcMat = imread("source.png");
	Point pt,pt1;
	Rect rect;
	int height = srcMat.rows;
	int width = srcMat.cols;
	rect.x = pt.x = height/2;
	rect.y = pt.y = width/2;
	rect.width = 100;
	rect.height = 100;
	circle(srcMat, pt, 50, CV_RGB(255, 0, 0), 2, 8, 0);
	line(srcMat, pt, pt1, CV_RGB(255, 0, 0), 1, 8, 0);
	rectangle(srcMat, rect, CV_RGB(255, 0, 0), 1, 8, 0);

	imshow("srcMat", srcMat);
	waitKey(0);
}
