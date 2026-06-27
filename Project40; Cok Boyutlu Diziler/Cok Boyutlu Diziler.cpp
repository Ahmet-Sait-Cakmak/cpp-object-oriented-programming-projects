#include <iostream>

using namespace std;

int main() {

	// C++'ta cok boyutlu diziler (multi-dimensional arrays)

	int arr[2][3] = { {0, 17, 25}, {12, 40, 35} };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}