#include "Kopek.h"

// constructor inheritance
Kopek::Kopek(string _isim) : Hayvan(_isim) {
	cout << getIsim() << " isimli uye degiskenine sahip olan obje olusturuldu.\n";
	kopekSayisi++;
}

// destructor
Kopek::~Kopek() {
	cout << getIsim() << " isimli uye degiskenine sahip olan obje silindi." << endl;
	kopekSayisi--;
}

void Kopek::havla() {
	cout << Hayvan::getIsim() << " havliyor." << endl;
}
