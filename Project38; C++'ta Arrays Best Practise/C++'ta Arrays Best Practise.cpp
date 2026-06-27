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
	
	const int size = 4;
	float sinavNotu[size];
	float holder = 0.0f;

	for (int i = 0; i < size; i++) {
		cout << "Lutfen " << (i + 1) << ". sinav notunu giriniz: ";
		cin >> sinavNotu[i];
		holder = holder + sinavNotu[i];
	}

	cout << "\nSinavNotu dizisindeki notlarin ortalamasi: " << holder / size << endl << endl;

	return 0;
}