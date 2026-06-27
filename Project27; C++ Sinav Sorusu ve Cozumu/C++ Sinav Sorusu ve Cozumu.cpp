/*
Kullanicinin console uzerinden girdigi 2 farkli pozitif tam sayinin faktoriyellerini 2 fark_
li for dongusu kullanarak bulunuz.
*/

#include <iostream>

using namespace std;

int main() {

	int sayi1, sayi2, sonuc1 = 1, sonuc2 = 1;
	cout << "Lutfen 2 farkli pozitif tam sayi giriniz: ";
	cin >> sayi1 >> sayi2;
	cout << endl;

	// Birinci sayi icin faktoriyel hesaplama

	for (int i = 1; i <= sayi1; i++) {
		sonuc1 = sonuc1 * i; // sonuc1 *= i;
	}

	cout << sayi1 << " sayisinin faktoriyeli: " << sonuc1 << endl;

	// Ikinci sayi icin faktoriyel hesaplama

	for (int j = sayi2; j > 0; j--) {
		sonuc2 = sonuc2 * j; // sonuc2 *= j;
	}

	cout << sayi2 << " sayisinin faktoriyeli: " << sonuc2 << endl;

	return 0;
}