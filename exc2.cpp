#include <opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
using namespace std;
using namespace cv;
int main() {
	VideoCapture cap;
	cap.open(0);
	if (!cap.isOpened())
	{
		cout << "不能打开视频文件" << endl;
		return-1;
	}

	double fps = cap.get(CAP_PROP_FPS);
	cout << "fps" << fps << endl;
	while (1)
	{
		Mat frame;
		bool rSucess = cap.read(frame);
		if (!rSucess)
		{
			cout << "不能读取帧" << endl;
			break;
		}
		else
		{
			imshow("frame", frame);
		}
		waitKey(30);
	}
}