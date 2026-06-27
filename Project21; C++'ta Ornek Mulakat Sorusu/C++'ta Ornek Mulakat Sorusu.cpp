#include <iostream>

using namespace std;

int main() {

	int x = 5, y = 9, z = 7.4, w1, w2;

	w1 = (z > x) - (y <= 11);

	w2 = z > x - y <= 11;

	cout << "w1: " << w1 << endl;
	cout << "w2: " << w2 << endl;

	return 0;
}




