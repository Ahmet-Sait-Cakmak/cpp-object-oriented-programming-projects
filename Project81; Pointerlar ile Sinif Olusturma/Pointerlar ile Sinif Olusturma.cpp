// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include "Otomobil.h"

int main() {

	Otomobil otomobil1("Audi", "Siyah", 90, 2020);
	Otomobil otomobil2("Opel", "Mavi", 100, 2019);

	Otomobil* p1, * p2, * p3;

	p1 = &otomobil1;
	p2 = &otomobil2;


	p1->ruhsatBilgileriGoster();

	cout << endl;

	p2->ruhsatBilgileriGoster();

	cout << endl << endl;

	p1->setOtomobilModel("Mercedes");
	p1->setOtomobilRenk("Beyaz");
	p1->setOtomobilBeygirGucu(130);
	p1->modelYili = 2025;


	p2->setOtomobilModel("BMW");
	p2->setOtomobilRenk("Gri");
	p2->setOtomobilBeygirGucu(120);
	p2->modelYili = 2024;

	cout << "otomobil1'in yeni modeli: " << p1->getOtomobilModel() << endl;
	cout << "otomobil1'in yeni rengi: " << p1->getOtomobilRenk() << endl;
	cout << "otomobil1'in yeni beygir gucu: " << p1->getOtomobilBeygirGucu() << endl;
	cout << "otomobil1'in yeni model yili: " << p1->modelYili << endl << endl;

	cout << "otomobil2'in yeni modeli: " << p2->getOtomobilModel() << endl;
	cout << "otomobil2'in yeni rengi: " << p2->getOtomobilRenk() << endl;
	cout << "otomobil2'in yeni beygir gucu: " << p2->getOtomobilBeygirGucu() << endl;
	cout << "otomobil2'in yeni model yili: " << p2->modelYili << endl << endl << endl;


	p3 = new Otomobil("Lexus", "Kahverengi", 140, 2026);

	p3->setOtomobilRenk("Lacivert");

	p3->ruhsatBilgileriGoster();

	delete p3;
	
	return 0;
}


