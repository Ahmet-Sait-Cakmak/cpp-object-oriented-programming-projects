/*
C++ MIDTERM SORUSU

4 basamakli ve rakamlari birbirinden farkli kac tane tam sayi oldugunu bulan ve ekrana yaz_
diran bir C++ programi yaziniz
*/

#include <iostream>

using namespace std;

int main() {
	
	int a, b, c, d, sayac = 0;

	for (int i = 1000; i <= 9999; i++) {
		a = i % 10;
		b = ((i - a) % 100) / 10;
		c = ((i - a - 10 * b) % 1000) / 100;
		d = (i - a - 10 * b - 100 * c) / 1000;
		
		if ((a != b) && (a != c) && (a != d) && (b != c) && (b != d) && (c != d)) {
			sayac++;
		}
    }

	cout << "4 basamakli ve rakamlari birbirinden farkli tam sayi adedi: " << sayac;
	cout << endl << endl;

	return 0;
}

// Bu sorunun alternatif cozumunu udemy'den mutlaka izle.