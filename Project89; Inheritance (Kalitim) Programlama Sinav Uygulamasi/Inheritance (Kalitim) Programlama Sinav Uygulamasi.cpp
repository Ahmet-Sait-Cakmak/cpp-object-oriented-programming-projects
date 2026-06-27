// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include "Kedi.h"

#include "Kopek.h"

#include "Kus.h"	

using namespace std;

int main() {

	Kedi kedi1("Mirnav");

	kedi1.beslen();

	kedi1.uyu();

	kedi1.fareYakala();

	cout << endl << endl;

	Kopek kopek1("Karabas");

	kopek1.beslen();

	kopek1.uyu();

	kopek1.havla();

	cout << endl << endl;

	Kus kus1("Boncuk");

	kus1.beslen();

	kus1.uyu();

	kus1.uc();

	cout << endl;


	return 0;
}