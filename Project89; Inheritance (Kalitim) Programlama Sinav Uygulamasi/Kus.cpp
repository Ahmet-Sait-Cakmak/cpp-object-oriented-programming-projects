#include "Kus.h"

Kus::Kus(string _isim) : Hayvan(_isim) {
	// Yapilmak istenen ek islemler burada yapilabilir
}

void Kus::uc() {
	cout << Hayvan::getIsim() << " ucuyor." << endl;
}