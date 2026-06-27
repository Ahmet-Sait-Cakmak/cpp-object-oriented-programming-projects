#include "Kedi.h"

// constructor inheritance
Kedi::Kedi(string _isim) : Hayvan(_isim) {

	// Yapilmak istenen ek islemler burada yapilabilir

}

void Kedi::fareYakala() {
	cout << Hayvan::getIsim() << " fare yakaliyor." << endl;
}

