#include "Otomobil.h"

/* Otomobil sınıfının yapıcı metodu(constructor) tanımlanıyor.Bu metod, otomobil nesnesi o_
luşturulurken renk, model ve beygir gücü gibi özelliklerin atanmasını sağlar. */
Otomobil::Otomobil(string _model, string _renk, int _beygirGucu) {

	model = _model;
	renk = _renk;
	beygirGucu = _beygirGucu;
}

/*

Yukaridaki Otomobil constructor'unun alternatif bir yazimi:

Otomobil::Otomobil(string _renk, string _model, int _beygirGucu) {

	Otomobil::model = _model;
	Otomobil::renk = _renk;
	Otomobil::beygirGucu = _beygirGucu;
}

*/


void Otomobil::ruhsatBilgileriGoster() {

	cout << "Model: " << model << endl;
	cout << "Renk: " << renk << endl;
	cout << "Beygir Gucu: " << beygirGucu << endl;
};

/*

Yukaridaki ruhsatBilgileriGoster fonksiyonunun alternatif bir yazimi:

void Otomobil::ruhsatBilgileriGoster() {

	cout << "Model: " << Otomobil::model << endl;
	cout << "Renk: " << Otomobil::renk << endl;
	cout << "Beygir Gucu: " << Otomobil::beygirGucu << endl;
}

*/
