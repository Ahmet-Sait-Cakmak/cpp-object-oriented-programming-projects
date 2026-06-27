/*
ALGORITMA GELISTIRME

- Kullanicidan bir tam sayi degeri aliniz.
- 1'den kullanicinin girdigi sayiya kadar tum asal sayilari bulunuz. (Ornegin kullanici 100
sayisini girdiyse yazdiginiz program araciligiyla 2, 3, 5, 7, 9, 11, 17, 19, 23, 29, 31, 37,
41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89 ve 97 sayilarini buabilmeniz bekleniyor.)
*/

/*
Bir sayi sadece kendisine ve 1'e kalansiz bolunebiliyorsa o sayi asaldir. Baska bir deyisle
bir sayiyi kalansiz bolebilen sadece 2 sayi varsa o sayi asaldir.
*/

#include <iostream>
#include <chrono>

using namespace std;

int main() {
	int sayi;
	cout << "Lutfen bir pozitif bir tam sayi giriniz: ";
	cin >> sayi;

	chrono::steady_clock::time_point baslangic = chrono::steady_clock::now();
	cout << "\n\n1'den " << sayi << "sayisina kadar olan asal sayilar:\n\n";

	for (int i = 1; i <= sayi; i++) {
		if (i == 1) {
			continue;
		}
		int sayac = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				sayac++;
				/*if (sayac > 2) {
					break;*/
				}
			}
		}
		if (sayac == 2) {
			cout << i << ", ";
		}
	}

	cout << endl << endl;

	chrono::steady_clock::time_point bitis = chrono::steady_clock::now();

	std::cout << "Islem suresi: "
		<< chrono::duration_cast<chrono::milliseconds>(bitis - baslangic).count()
		<< " milisaniye." << std::endl;

	return 0;
}