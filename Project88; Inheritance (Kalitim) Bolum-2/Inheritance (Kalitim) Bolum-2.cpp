#include "Kedi.h"

int main() {

	Kedi kedi1("Pasa");

	cout << "Hayvanin ismi: " << kedi1.getIsim() << endl;

	kedi1.beslen();

	kedi1.uyu();

	kedi1.fareYakala();

	cout << endl;

	kedi1.setIsim("Mirnav");

	cout << "Hayvanin ismi: " << kedi1.getIsim() << endl;

	kedi1.beslen();

	kedi1.uyu();

	kedi1.fareYakala();

	cout << endl;

	return 0;
}