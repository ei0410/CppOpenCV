#include <iostream>
#include "opencv2\opencv.hpp"

using namespace cv;

int main(int argc, char *argv[])
{
	Mat gray, canny;
	Mat img = imread("purin.png");

	if (!img.data) { //�摜���Ȃ��������̗�O����
		return -1;
	}

	cvtColor(img, gray, CV_RGB2GRAY); //�O���[�X�P�[���֕ϊ�

	Canny(gray, canny, 50, 200);

	imshow("canny.png", canny);

	waitKey(0);
	return 0;
}