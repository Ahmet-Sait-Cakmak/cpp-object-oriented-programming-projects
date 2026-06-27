// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include "Kopek.h"

using namespace std;

/* C++'ta static bir sinif uyesinin deger atamasi genellikle ilgili sinifin .cpp dosyasinda 
veya bazen de main dosyasinda asagidaki gibi yapilir. Sinif isminden once sinif uyesinin veri
tipi neyse (int, float, string vs.) o yazilir, sonra sinif ismi ve sinif uyesi yazilir. */
int Kopek::kopekSayisi = 0;

int main() {

	Kopek kopek1("Karabas");

	cout << endl;

	kopek1.beslen();

	kopek1.uyu();

	kopek1.havla();

	cout << endl << endl;

	Kopek kopek2("Tomy");

	Kopek kopek3("Vlad");

	Kopek* kp = new Kopek("John");

	cout << "\n\nKopek sayisi: " << Kopek::kopekSayisi << endl << endl;

	delete kp;

	cout << "\nKopek sayisi: " << Kopek::kopekSayisi << endl << endl << endl;

	return 0;
}