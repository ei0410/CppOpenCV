#include <iostream>
#include "opencv2\opencv.hpp"

using namespace cv;

int main(int argc, char *argv[])
{
	Mat img = imread("purin.png");	    // �J���[(RGB��3�`�����l��)�œǂݍ���	
	//Mat im = imread("purin.png", 1);	// �J���[(3�`�����l��)�œǂݍ���
	//Mat im = imread("purin.png", 0);	// �O���[�X�P�[��(3�`�����l��)�œǂݍ���
	//Mat im = imread("purin.png", -1); // �J���[(RGBA��4�`�����l��)�œǂݍ���	
	
	//imwrite("raw.png", img);//�ۑ��������Ƃ��͗L���ɂ���
	
	imshow("raw.png", img);
	
	waitKey(0);
	return 0;
}