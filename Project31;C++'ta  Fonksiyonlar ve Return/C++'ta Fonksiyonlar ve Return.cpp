/*
C++'ta Fonksiyonlar (Metodlar):

Bu konuyu anlamak icin bu cpp dosyasindaki kodu okuman yetmez. Mutlaka udemy'den bu konuyla
alakali videoyu izle.
*/

#include <iostream>

using namespace std;

int hesapla(int x) {

	int sonuc;
	sonuc = 3 * x + 2;

	return sonuc;
}


int dikdortgenAlani(int uzunKenar, int kisaKenar) {
	
	int alan = uzunKenar * kisaKenar;
	
	return alan;
}

void kareAlani(int kenar) {
	
	cout << "Karenin alani: " << kenar * kenar << endl;
}

int main() {

	int hesapSonucu;
	hesapSonucu = hesapla(2);
	cout << "Hesap sonucu: " << hesapSonucu << endl << endl;

	cout << "Dikdortgen alani: " << dikdortgenAlani(10, 5) << endl << endl;

	kareAlani(4);

	return 0;
}