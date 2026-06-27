/* 
Bu konuyu anlamak istiyorsan bu konunun anlatildigi ders videosunu udemy'dan izle. Sadece 
dece bu sayfada yazili olan kodu okuyarak konuyu anlayamazsin.
*/

#include <iostream>

using namespace std;

int main() {

	double bolunen, bolen, sonuc;

	cout << "Lutfen bolunen sayiyi giriniz: ";
	cin >> bolunen;
	cout << "Lutfen bolen sayiyi giriniz: ";
	cin >> bolen;
	cout << endl;

	try {
		if (bolen == 0) 
			throw 99;
		
		sonuc = bolunen / bolen;
		cout << "Sonuc: " << sonuc << endl << endl;
	}
	catch (int hataKodu) {
		cout << "Bolen sayi 0 olmamali!\n\n";
	}

	return 0;
}