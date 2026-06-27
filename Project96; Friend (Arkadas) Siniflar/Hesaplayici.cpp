#include "Hesaplayici.h"

void Hesaplayici::ortalamaHesapla(Ogrenci ogr) {
	float ortalama = (ogr.not1 + ogr.not2) / 2;
	cout << ogr.ad << " isimli ogrencinin not ortalamasi: " << ortalama << endl;
}