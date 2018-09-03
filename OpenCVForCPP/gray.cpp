#include <iostream>
#include "opencv2\opencv.hpp"

using namespace cv;

int main(int argc, char *argv[])
{
	Mat gray;
	Mat img = imread("purin.png");

	if (!img.data) { //�摜���Ȃ��������̗�O����
		return -1;
	}
	
	cvtColor(img, gray, CV_RGB2GRAY);

	imshow("raw.png", img);

	waitKey(0);
	return 0;
}