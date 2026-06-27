#include <iostream>

using namespace std;

int main() {

	/*
	For dongusu,bir kod blogunu belirli bir sayida ve ust uste calistirmak icin kullanilan
	bir dongudur.
	*/

	/*
	for (sayac tanimi ve ilk deger atama; dongu calisma kosulu; sayac artirma veya azaltma) {
	... dongu icerigi ...
	}
	*/

	// 1'den 10'a kadar olan sayilari ekrana yazdirmak icin for dongusu kullanalim.

	cout << "1'den 10'a kadar sayilar: ";

	for (int i = 1; i <= 10; i++) {

		cout << i << ", ";
	}

	cout << endl << endl << "Dongu bitmistir." << endl << endl << endl;


// 1'den 25'e kadar olan cift sayilari yazdirmak icin for dongusu kullanalim.

cout << "1'den 25'e kadar olan cift sayilar: ";

int i;

for (i = 1; i <= 25; i++) {

	if ((i <= 25) && (i % 2 == 0)) {

		cout << i << ", ";
	}
}

cout << "\n\nDongu bitmistir." << endl << endl;

return 0;
}
