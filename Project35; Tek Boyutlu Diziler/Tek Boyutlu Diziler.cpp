#include <iostream>

using namespace std;

int main() {

	// C++'ta tek boyutlu diziler (one dimensional arrays)

	int dizi[5]; // ismi dizi olan 5 elemanlý bir tam sayý dizisi tanýmladim
	dizi[0] = 12;
	dizi[1];
	dizi[2] = 8;
	dizi[3] = 45;
	dizi[4] = 18;

	cout << "Lutfen dizi isimli dizinin 1. indisi icin bir deger girin: ";
	cin >> dizi[1];
	cout << endl;

	for (int i = 0; i < 5; i++) {
        cout << "Dizinin " << (i + 1) << ". elemani: " << dizi[i] << endl;
	}

	return 0;
}