#include "Otomobil.h"

void Otomobil::ruhsatBilgileriGoster() {

	cout << "Model: " << model << endl;
	cout << "Renk: " << renk << endl;
	cout << "Beygir Gucu: " << beygirGucu << endl;
}

/*

Yukaridaki fonksiyonun alternatif bir yazimi:

void Otomobil::ruhsatBilgileriGoster() {

	cout << "Model: " << Otomobil::model << endl;
	cout << "Renk: " << Otomobil::renk << endl;
	cout << "Beygir Gucu: " << Otomobil::beygirGucu << endl;
}

*/