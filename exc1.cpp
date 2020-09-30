#include<iostream>
#include <opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
using namespace std;
using namespace cv;
int main() {
	Mat src_color = imread("source.png");
	vector<Mat> channels;
	split(src_color, channels);
	Mat B = channels.at(0);
	Mat G = channels.at(1);
	Mat R = channels.at(2);
	imshow("red", R);
	imshow("blue", B);
	imshow("green", G);
	imshow("original Mat", src_color);
	waitKey(0);
}
