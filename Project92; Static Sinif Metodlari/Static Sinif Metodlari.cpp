// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include "Kopek.h"

using namespace std;

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

	cout << "\nKopek sayisi: " << Kopek::getKopekSayisi() << endl << endl;

	delete kp;

	cout << "\nKopek sayisi: " << Kopek::getKopekSayisi() << endl << endl << endl;

	cout << "Girilen sayinin karesi: " << Kopek::karesiniHesapla(5) << endl << endl << endl;

	return 0;
}