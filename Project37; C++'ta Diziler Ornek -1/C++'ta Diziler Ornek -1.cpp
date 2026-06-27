/*
PROGRAMLAMA SORUSU

Asagidaki özellikleri tasiyan bir C++ programi yaziniz:

- Kullanicidan 4 adet sinav notu girmesini isteyiniz.
- Bu 4 notu bir dizi (array) icinde tutunuz.
- Dizideki notlarin ortalamasini hesaplayiniz.
- Hesapladiginiz ortalamayi ekrana yazdiriniz.
*/

#include <iostream>

using namespace std;

int main() {
	float sinavNotu[4];
	float holder = 0.0f;

	for (int i = 0; i < 4; i++) {
		cout << "Lutfen " << (i + 1) << ". sinav notunu giriniz: ";
		cin >> sinavNotu[i];
		holder = holder + sinavNotu[i];
	}

	cout << "\nSinavNotu dizisindeki notlarin ortalamasi: " << holder/4 << endl << endl;

	return 0;
}