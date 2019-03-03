#include <iostream>
#include <opencv2\core\core.hpp>
#include <opencv2\highgui\highgui.hpp>
using namespace cv;
using namespace std;

#pragma comment(lib,"opencv_world401.lib")
#pragma comment(lib,"opencv_world401d.lib")

int main(int argc, char* argv[])
{
	std::string windowName = "Hello OpenCV";
	std::string imgFile = "Tommy.jpg";
	Mat image = imread(imgFile);
	if (!image.data)
	{
		std::cout << "无法打开图像文件" << std::endl;
		system("PAUSE");
		return -1;
	}
	namedWindow(windowName);

	imshow(windowName, image);
	waitKey(0);

	return 0;
}