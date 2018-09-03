#include <iostream>
#include "opencv2\opencv.hpp"

using namespace cv;

int main(int argc, char *argv[])
{
	Mat gray, bin;
	Mat img = imread("purin.png");

	if (!img.data) { //�摜���Ȃ��������̗�O����
		return -1;
	}

	cvtColor(img, gray, CV_RGB2GRAY); //�O���[�X�P�[���֕ϊ�

	threshold(gray, bin, 127, 255, THRESH_BINARY);

	imshow("bin.png", bin);

	waitKey(0);
	return 0;
}