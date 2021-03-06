#include <iostream>
#include "opencv2\opencv.hpp"

using namespace cv;

int main(int argc, char *argv[])
{
	Mat reverse;
	Mat img = imread("purin.png");

	if (!img.data) { //画像がなかった時の例外処理
		return -1;
	}

	reverse = ~img;

	imshow("reverse.png", reverse);

	waitKey(0);
	return 0;
}