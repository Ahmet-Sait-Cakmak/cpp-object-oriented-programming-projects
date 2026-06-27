#include <iostream>

#include "Hesaplayici.h"

using namespace std;

int main() {
	
	Ogrenci ogrenci1("Ali", 70, 80);
	Ogrenci ogrenci2("Veli", 90, 100);
	
	Hesaplayici h;

	h.ortalamaHesapla(ogrenci1);
	h.ortalamaHesapla(ogrenci2);

	return 0;
}