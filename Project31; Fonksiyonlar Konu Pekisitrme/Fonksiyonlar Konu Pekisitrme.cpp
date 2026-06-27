#include <iostream>

using namespace std;

void isim_yazdirma(string isim) {
	cout << "Merhaba " << isim << "!" << endl << endl;
}

string ad_soyad_birlestirme() {

	string ad, soyad, adSoyad;

	cout << "Lutfen adinizi giriniz: ";
	cin >> ad;
	cout << "Lutfen soyadinizini giriniz: ";
	cin >> soyad;
	cout << endl;

	adSoyad = ad + " " + soyad;

	return adSoyad;
}

int main() {
	
	isim_yazdirma("Kaan");

	string ad_soyad = ad_soyad_birlestirme();

	cout << "Merhaba " << ad_soyad << "! Sisteme hosgeldiniz.\n\n";

	return 0;
}