#include "Kopek.h"

/* C++'ta static bir sinif uyesinin deger atamasi genellikle ilgili sinifin .cpp dosyasinda
veya bazen de main dosyasinda asagidaki gibi yapilir. Sinif isminden once sinif uyesinin veri
tipi neyse (int, float, string vs.) o yazilir, sonra sinif ismi ve sinif uyesi yazilir. */
int Kopek::kopekSayisi = 0;


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



