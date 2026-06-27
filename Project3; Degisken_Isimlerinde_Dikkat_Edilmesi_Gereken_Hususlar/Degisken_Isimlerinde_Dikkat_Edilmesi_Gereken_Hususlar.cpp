#include <iostream>

using namespace std;

int main() {

	/*
	Degisken isimlerinde dikkat edilmesi gereken hususlar :
	-Degisken isimleri harf (A-Z, a-z) veya alt cizgi (_) ile baslamalidir.
	-Degisken isimleri rakam (0-9) ile baslayamaz. (Degisken isimlerinde ilk karak_
	ter rakam olamaz.)
	-Degisken isimlerinde bosluk kullanilamaz.
	-Degisken isimlerinde "_" hariç ozel karakterler (., %, $, #, @, !, vb.) kullanilamaz.
	-Deðiþken isimlerinde noktalama iþaretleri kullanýlamaz.
	-Degisken isimleri buyuk/kucuk harf duyarlidir. (isim, Isim ve ISIM farklidir.)
	-Degisken isimlerini camelcase veya snake_case seklinde yazmak yaygin bir uygula_
	madir.
	*/

	int dogumYili = 1980;
	int birinci_sinav_notu = 85;

	cout << "Ali " << dogumYili << " yilinda dogmustur." << endl
		<< "Ali'nin birinci sinav notu " << birinci_sinav_notu << "'dir." << endl;

	return 0;
}