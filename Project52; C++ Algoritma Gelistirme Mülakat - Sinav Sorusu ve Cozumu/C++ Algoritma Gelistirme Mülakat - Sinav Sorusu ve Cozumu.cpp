/*
20 ile 40 arasindaki tüm tam sayilarin tüm pozitif tam sayi bolenlerini bulan ve ekrana
yazdiran bir program yaziniz.
*/

#include <iostream>

using namespace std;

int main() {
	for (int i = 20; i <= 40; i++) {
		cout << i << "sayisinin pozitif tam sayi bolenleri: ";
			for (int j = 1; j <= i; j++) {
				if (i % j == 0) {
					cout << j << ", ";
				}
			}

		cout << endl;
	}

	cout << endl << endl;

	return 0;
}