// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include <iostream>

using namespace std;

struct Point {
	// Uye degiskenler
	int x;
	int y;
};

struct Rectangle {
	double width;
	double height;
};

int main() {
	Point pt1;
	pt1.x = 10;
	pt1.y = 20;

	Point pt2;
	pt2.x = 50;
	pt2.y = 70;

	Rectangle rect1;
	rect1.width = 10.2;
	rect1.height = 5.5;

	cout << "pt1'in x degeri = " << pt1.x << ", pt1'in y degeri = " << pt1.y << endl;
	cout << "pt2'nin x degeri = " << pt2.x << ", pt2'nin y degeri = " << pt2.y << endl;
	cout << "rect1'in width degeri = " << rect1.width << ", rect1'in height degeri = " 
	<< rect1.height << endl;

	return 0;
}