#include <iostream>
#include <opencv2/highgui/highgui.hpp>

using namespace std;

int main()
{
	cv::VideoWriter outputVideo;
//	bool fourcc_on = true; //switch on / off different error

	outputVideo.open("E:/outVideo.mp4", CV_FOURCC('X', '2', '6', '4'), 8, cv::Size(640, 360), true);

	if (!outputVideo.isOpened())
	{
			cout  << "Could not open the output video for write" << endl;
			return -1;
	}

	outputVideo.release();
	return 0;
}

