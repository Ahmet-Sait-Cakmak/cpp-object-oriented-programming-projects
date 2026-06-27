// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include "Otomobil.h"

int main() {
  
	Otomobil otomobil1("Audi", "Siyah", 90, 2020);
	Otomobil otomobil2("Opel", "Mavi", 100, 2019);


	otomobil1.ruhsatBilgileriGoster();

	cout << endl;

	otomobil2.ruhsatBilgileriGoster();

	cout << endl << endl;

	otomobil1.setOtomobilModel("Mercedes");
	otomobil1.setOtomobilRenk("Beyaz");
	otomobil1.setOtomobilBeygirGucu(130);
	otomobil1.modelYili = 2025;


	otomobil2.setOtomobilModel("BMW");
	otomobil2.setOtomobilRenk("Gri");
	otomobil2.setOtomobilBeygirGucu(120);
	otomobil2.modelYili = 2024;

	cout << "otomobil1'in yeni modeli: " << otomobil1.getOtomobilModel() << endl;
	cout << "otomobil1'in yeni rengi: " << otomobil1.getOtomobilRenk() << endl;
	cout << "otomobil1'in yeni beygir gucu: " << otomobil1.getOtomobilBeygirGucu() << endl;
	cout << "otomobil1'in yeni model yili: " << otomobil1.modelYili << endl << endl;

	cout << "otomobil2'in yeni rengi: " << otomobil2.getOtomobilRenk() << endl;
	cout << "otomobil2'in yeni modeli: " << otomobil2.getOtomobilModel() << endl;
	cout << "otomobil2'in yeni beygir gucu: " << otomobil2.getOtomobilBeygirGucu() << endl;
	cout << "otomobil2'in yeni model yili: " << otomobil2.modelYili << endl;

	return 0;
}


