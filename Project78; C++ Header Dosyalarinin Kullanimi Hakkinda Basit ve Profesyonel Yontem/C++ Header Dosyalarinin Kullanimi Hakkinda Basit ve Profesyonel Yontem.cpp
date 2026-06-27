// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include "Otomobil.h"

int main() {

	Otomobil otomobil1, otomobil2;

	otomobil1.model = "Audi";
	otomobil1.renk = "siyah";
	otomobil1.beygirGucu = 90;

	otomobil2.model = "Opel";
	otomobil2.renk = "mavi";
	otomobil2.beygirGucu = 100;


	otomobil1.ruhsatBilgileriGoster();

	cout << endl << endl;

	otomobil2.ruhsatBilgileriGoster();


	return 0;
}


