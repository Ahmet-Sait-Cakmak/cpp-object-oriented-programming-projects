// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include "Otomobil.h"

int main() {

	Otomobil otomobil1("Audi", "Siyah", 90, 2020, 2);

	cout << "Otomobil1'in kapi sayisi: " << *(otomobil1.pKapiSayisi) << endl;

	*(otomobil1.pKapiSayisi) = 4;

	otomobil1.ruhsatBilgileriGoster();

	cout << endl;

	Otomobil otomobil2("Opel", "Mavi", 100, 2019, 2);

	cout << "Otomobil2'in kapi sayisi: " << *(otomobil2.pKapiSayisi) << endl;

	*(otomobil2.pKapiSayisi) = 4;

	otomobil2.ruhsatBilgileriGoster();

	cout << endl;

	Otomobil* p = new Otomobil("Lexus", "Kahverengi", 140, 2026, 2);

	cout << "Dinamik olarak olusturulmus olan objenin kapi sayisi: " << *(p->pKapiSayisi)
		<< endl;

	p->setOtomobilRenk("Lacivert");

	*(p->pKapiSayisi) = 4;

	p->ruhsatBilgileriGoster();

	cout << endl << endl;

	delete p; /* Pointer kullanimiyla dinamik olarak olusturulan bir sinifin adresini tu_
	tan pointer, programcinin o pointer ile isi bittiginde mutlaka delete edilmelidir. Yok_
	sa memory leak (bellek sizintisi) olusur. */

	return 0;
}


