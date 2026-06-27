#include "Hayvan.h"

Hayvan::Hayvan(string _isim) {
	isim = _isim;
};

void Hayvan::beslen() {
	cout << isim << " besleniyor." << endl;
};

void Hayvan::uyu() {
	cout << isim << " uyuyor." << endl;
};

void Hayvan::setIsim(string _isim) {
	isim = _isim;
};

string Hayvan::getIsim() {
	return isim;
};
