#include <iostream>

using namespace std;

/*
Function Overloading: Programlama dillerinde ayný isimde fakat farkli parametre sayisi veya
parametre tipi farkli olan birden fazla fonksiyon tanimlanabilir. Bu isleme "Function
Overloading (Fonksiyonlarin Asiri Yuklenmesi)" denir. Baska bir deyisle; ayni isimli bir
fonksiyonun farkli girisler alacak sekilde birden fazla versiyonunu yazmaya funtion over_
loading (fonksiyon asiri yuklenmesi) denir.
*/

// Bu konuyu anlamak veya tekrar etmek icin bu konunun videosunu udemy'den mutlaka izle.

void ekranaHataMesajiYaz() {
	cout << "Dikkat! Programda hata olustu." << endl;
}

void ekranaHataMesajiYaz(string hataMesaji) {
	cout << "Dikkat! Programda hata olustu. Hata Mesaji: " << hataMesaji << endl;
}

void ekranaHataMesajiYaz(int hataKodu) {
	cout << "Dikkat! Programda hata olustu. Hata Kodu: " << hataKodu << endl;
}

void ekranaHataMesajiYaz(int hataKodu1, int hataKodu2) {
	cout << "Dikkat! Programda hata olustu. Hata Kodlari: " << hataKodu1 << " ve " << hataKodu2 << endl;
}

/*
Kotu Kod Yazimi:

void ekranaHataMesajiYaz1(int hataKodu) {
cout << "Hatali islem, hata kodu: " << hataKodu << endl;
}

void ekranaHataMesajiYaz2(int hataKodu1, int hataKodu2) {
cout << "Hatali islem, hata kodlari: " << hataKodu1 << endl;
}
*/

int main() {
	ekranaHataMesajiYaz();
	ekranaHataMesajiYaz("Error in program.");
	ekranaHataMesajiYaz(404);
	ekranaHataMesajiYaz(500, 501);
	return 0;
}
