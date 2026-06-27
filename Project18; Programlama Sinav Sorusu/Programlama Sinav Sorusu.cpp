#include <iostream>

using namespace std;

int main() {

/* 
Kullanicidan 3 tamsayi alan ve bu sayilar arasindaki en kucugunu bulan bir program yaziniz.
*/
	int sayi1, sayi2, sayi3;

	cout << "Lutfen uc tamsayi giriniz: ";
	cin >> sayi1 >> sayi2 >> sayi3;

	if ((sayi1 - sayi2) <= 0 && (sayi1 - sayi3) <= 0) {

		cout << "\nGirdiginiz en kucuk tamsayi: " << sayi1 << endl;
	}

	else if (((sayi2 - sayi3) <= 0) && ((sayi2 - sayi1) <= 0)) {
		
		cout << "\nGirdiginiz en kucuk tamsayi: " << sayi2 << endl;
	}

	else {

		cout << "\nGirdiginiz en kucuk tamsayi: " << sayi3 << endl << endl;
	}
	
	return 0;
}