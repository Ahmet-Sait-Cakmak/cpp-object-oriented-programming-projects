#include <iostream>

using namespace std;

int main() {

	float sayi1, sayi2, sonuc;
	int islem; /* islem degiskenine atanacak olan deger toplama islemi icin 1, cikarma is_
	lemi icin 2, carpma islemi icin 3, bolme islemi icin 4 olacak. */

	cout << "Lutfen birinci sayiyi giriniz: ";
	cin >> sayi1;
	cout << "Lutfen ikinci sayiyi giriniz: ";
	cin >> sayi2;
	cout << "\nLutfen yaptirmak istediginiz isleme göre asagidaki sayilardan birini seciniz:\n"
		<< "Toplama islemi icin 1" << endl << "Cikarma islemi icin 2" << endl
		<< "Carpma islemi icin 3" << endl << "Bolme islemi icin 4\n\n";
	cin >> islem;

	if (islem == 1) {
		sonuc = sayi1 + sayi2;
		cout << "\nToplama Islemi Sonucu: " << sonuc << endl;
	}
	else if (islem == 2) {
		sonuc = sayi1 - sayi2;
		cout << "\nCikarma Islemi Sonucu: " << sonuc << endl;
	}
	else if (islem == 3) {
		sonuc = sayi1 * sayi2;
		cout << "\nCarpma Islemi Sonucu: " << sonuc << endl;
	}
	else if (islem == 4) {
		if (sayi2 != 0) { // Bolme islemi icin ikinci sayinin sifir olmamasi gerekir.
			sonuc = (float)sayi1 / sayi2;
			cout << "\nBolme Islemi Sonucu: " << sonuc << endl;
		}
		else {
			cout << "\nHata: Sayi2 icin 0 girdiniz. Bir sayi sifira bolunemez!" << endl;
		}
	}
	else {
		cout << "\nYaptirmak istediginiz islem icin yanlis sayi girdiniz!" << endl;
	}

	return 0;

}