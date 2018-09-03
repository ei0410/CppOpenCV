#include <iostream>
#include "opencv2\opencv.hpp"

using namespace cv;

int main(int argc, char *argv[])
{
	Mat img = imread("purin.png");	    // カラー(RGBの3チャンネル)で読み込み	
	//Mat im = imread("purin.png", 1);	// カラー(3チャンネル)で読み込み
	//Mat im = imread("purin.png", 0);	// グレースケール(3チャンネル)で読み込み
	//Mat im = imread("purin.png", -1); // カラー(RGBAの4チャンネル)で読み込み	
	
	//imwrite("raw.png", img);//保存したいときは有効にする
	
	imshow("raw.png", img);
	
	waitKey(0);
	return 0;
}