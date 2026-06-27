/*
PROGRAMLAMA SORUSU:

- Kullanicidan 4 adet sinav notu girmesini isteyiniz.
- Her sinav notunun ortalamaya farkli yüzdelerle katildigini varsayalim:
1. sinavin ortalamaya katkisi %15 olsun.
2. sinavin ortalamaya katkisi %15 olsun.
3. sinavin ortalamaya katkisi %30 olsun.
4. sinavýn ortalamaya katkisi % 40 olsun.

- Bu yüzdeleri bir dizi icerisinde tutunuz. ( Ornek: double agirlik = { 0.15, 0.15, 0.30, 0.40 }
- Girilen 4 sinav notunu da baska bir dizi icerisinde tutunuz. (Ornek = double sinavNotlari[4])
- Her notu, o notun agirlik yüzdesi ile carparak toplayiniz ve buldugunuz degeri ekrana "A_
girlikli Ortalama" seklinde yazdiriniz.
*/

#include <iostream>

using namespace std;

int main() {

	const int size = 4;
	float sinavNotlari[size];
	float agirlik[size] = { 0.15f, 0.15f, 0.30f, 0.40f };
	float holder = 0.0f;

	for (int i = 0; i < size; i++) {
		cout << "Lutfen " << (i + 1) << ". sinav notunu giriniz: ";
		cin >> sinavNotlari[i];
		holder = holder + (sinavNotlari[i] * agirlik[i]);
	}

	cout << "\n\nAgirlikli not ortalamasi: " << holder << endl << endl;

	return 0;
}