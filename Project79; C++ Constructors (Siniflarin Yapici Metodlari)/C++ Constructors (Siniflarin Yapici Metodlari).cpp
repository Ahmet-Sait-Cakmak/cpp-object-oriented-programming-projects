// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include "Otomobil.h"

int main() {

	Otomobil otomobil1("Audi", "siyah", 90);
    Otomobil otomobil2("Opel", "Mavi", 100);

	otomobil1.ruhsatBilgileriGoster();

	cout << endl << endl;

	otomobil2.ruhsatBilgileriGoster();


	return 0;
}


