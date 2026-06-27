#include "Kopek.h"

Kopek::Kopek(string _isim) : Hayvan(_isim) {
	// Yapilmak istenen ek islemler burada yapilabilir
};

void Kopek::havla() {
	cout << Hayvan::isim << " havliyor." << endl;
};
