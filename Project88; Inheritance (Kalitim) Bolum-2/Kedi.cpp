#include "Kedi.h"

// constructor inheritance
Kedi::Kedi(string _isim) : Hayvan(_isim) {

/*
Hayvan constructor'unun yaptigi islemlerin disinda Kedi constructor'unun ek islemler yapmasi is_
teniyorsa o islemler burada yaptirilir.
*/
}

void Kedi::fareYakala() {
	cout << Hayvan::getIsim() << " fare yakaliyor." << endl;
}

