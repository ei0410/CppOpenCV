#include <iostream>
#include "opencv2\opencv.hpp"

using namespace cv;

int main(int argc, char *argv[])
{
	Mat img;

	VideoCapture cap(0);

	if (!cap.isOpened()) { //ƒJƒƒ‰‚ªŠJ‚¯‚È‚©‚Á‚½‚Ì—áŠOˆ—
		return -1;
	}

	while (1) {
		cap >> img;

		imshow("camera", img);

		if (waitKey(30) > 0) {
			break;
		}
	}
	return 0;
}