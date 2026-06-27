/*
Sinav Sorusu:

Parametreleri min ve max olan ve min ve max arasinda (min ve max dahil) random negatif ol_
mayan tam sayi ureten bir fonksiyon yazin.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rastgele_sayi(int min, int max) {
	
	srand(time(0));

	return (min + (rand() % (max - min + 1))); 
	
}
int main() {

	int buyukSayi, kucukSayi, sayi1, sayi2;
	
	cout << "Lutfen buyuklukleri birbirinden farkli olan iki negatif olmayan tam sayi giriniz: ";
	cin >> sayi1 >> sayi2;

	if (sayi1 > sayi2) {
		buyukSayi = sayi1;
		kucukSayi = sayi2;
	}
    else {
		buyukSayi = sayi2;
		kucukSayi = sayi1;
	}

	cout << "\nGirdiginiz iki sayi arasinda uretilen rastgele sayi: ";
	cout << rastgele_sayi(kucukSayi, buyukSayi) << endl;

	return 0;
}

