#include<iostream>
#include <opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() 
{
	int n = 0;
	float histgram[256];
	for (int i = 0; i < 256; i++) 
	{
		histgram[i] = 0;
	}
	Mat dispMat = imread("source.png",0);
	int height = dispMat.rows;
	int width = dispMat.cols;
	for (int i = 0; i < height; i++) 
	{
		for (int j = 0; j < width; j++) 
		{
			histgram[dispMat.at<uchar>(i,j)]++;
			n++;
		}
	}
	for (int i = 0; i < 256; i++) 
	{
		histgram[i] = histgram[i] * 4000 / n;
	}
	Mat image(255, 255, CV_8UC3,cv::Scalar(0,0,0));

	for (int x = 0; x < 255; x++)
	{
		Point pt,pt1;
		pt1.x = pt.x = x;
		pt.y = 255-histgram[x];
		pt1.y = 255;
		line(image, pt, pt1, CV_RGB(255, 255, 255), 1, 8, 0);
	}
	imshow("1", image);
	waitKey(0);

}