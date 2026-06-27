#include <iostream>

using namespace std;

int main() {

	double arr[] = { 21.2, 25.75, 27 };

	string mevsimler[] = { "ilkbahar", "yaz", "sonbahar", "kis" };

	for (int i = 0; i < 3; i++) {
		cout << "arr isimli dizinin " << (i + 1) << ". elemani: " << arr[i] << endl;
	}

	cout << endl << endl;

	for (int i = 0; i < 4; i++) {
		cout << "mevsimler isimli dizinin " << (i + 1) << ". elemani: " << mevsimler[i] << endl;
	}
	
	return 0;
}