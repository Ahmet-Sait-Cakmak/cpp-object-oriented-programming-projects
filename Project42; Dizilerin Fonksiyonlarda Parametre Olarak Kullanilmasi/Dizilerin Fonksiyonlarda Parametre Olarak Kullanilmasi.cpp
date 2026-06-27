#include <iostream>

using namespace std;

void diziDegistir(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] += 1;
	}
}

int main() {

	int dizi[7] = { 3, 9, 12, 5, 10, 1, 3 };

	for (int i = 0; i < 7; i++) {
		cout << "Dizinin " << (i + 1) << ". elemani: " << dizi[i] << endl;
	}

	cout << endl;

	diziDegistir(dizi, 7);

	for (int i = 0; i < 7; i++) {
		cout << "Dizinin yeni" << (i + 1) << ". elemani: " << dizi[i] << endl;
	}

	return 0;
}