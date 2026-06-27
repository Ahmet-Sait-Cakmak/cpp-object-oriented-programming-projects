/*
Ornek:
Kullanicidan 2 sayi aliniz ve bu sayilari baslangic ve bitis sayilari olarak adlandiriniz.
Baslangic sayisindan bitis sayisina kadar olan tum sayilarin arasindan 7 ile bolunebilenleri
ekrana yazdiriniz.
*/

#include <iostream>

using namespace std;

int main() {

	int baslangic, bitis;

	cout << "Lutfen bir baslangic sayisi giriniz: ";
	cin >> baslangic;
	cout << "Lutfen bir bitis sayisi giriniz: ";
	cin >> bitis;
	cout << endl;

	while (baslangic <= bitis) {

		if (baslangic % 7 == 0) {
			
			cout << baslangic << " sayisi 7 ile bolunebilir.\n";
		}

		baslangic++;

	}

	cout << "\nDongu bitmistir.\n";
	
	return 0;
}