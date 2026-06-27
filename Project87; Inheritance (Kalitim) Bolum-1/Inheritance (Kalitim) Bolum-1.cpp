#include "Hayvan.h"

int main() {

	Hayvan h("Karabas");

	cout << "Hayvanin ismi: " << h.getIsim() << endl;

	h.beslen();

	h.uyu();

	cout << endl;

	h.setIsim("Benekli");

	cout << "Hayvanin ismi: " << h.getIsim() << endl;

	h.beslen();

	h.uyu();

	cout << endl;

	return 0;
}