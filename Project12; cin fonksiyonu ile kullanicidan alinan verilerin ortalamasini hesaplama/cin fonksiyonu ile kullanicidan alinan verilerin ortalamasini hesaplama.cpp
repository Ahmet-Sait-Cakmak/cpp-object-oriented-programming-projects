/* C++ KULLANICIDAN ALINAN VERILERIN ORTALAMASINI ALMA

Kullanicidan 3 adet sinav notu aliniz (sinav notlari tamsayi seklinde olmali).
Daha sonra bu notlarin ortalamasini bulup ekrana asaðýdaki 2 sekilde yazdiriniz:

1) Kusuratlý olacak sekilde (double veri tipinde; noktadan sonra 2 digit)
2) Sonucu yuvarlama islemi kullanarak tam sayi formatinda yazdirin. (round fonksiyonu ile)
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	int sinav1, sinav2, sinav3;

	cout << "Lutfen sinav1, sinav2 ve sinav3 notlarini tam sayi olarak giriniz: ";
	cin >> sinav1 >> sinav2 >> sinav3;

	double sonuc = (double)(sinav1 + sinav2 + sinav3) / 3;

    /* 
	1) Sonucu kusuratlý olarak yazdirma (double veri tipinde; noktadan sonra 2 digit olacak 
	sekilde) 
	*/

	cout << "1) Sonuc (kusuratli): " << fixed << setprecision(2) << sonuc << endl;

	
	// 2) Sonucu yuvarlama islemi kullanarak tam sayi formatinda yazdirma 

	cout << "2) Sonuc (yuvarlamali, tamsayi): " << (int)round(sonuc) << endl;
}