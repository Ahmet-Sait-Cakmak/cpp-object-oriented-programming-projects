#pragma once

#include <iostream>

using namespace std;

class Hayvan {

/* Hayvan classina ait private olarak tanimlanmis isim uyesine hayvan classi icinden direkt o_
larak erisilebilir. Ancak isim uyesine, hayvan classinin subclasslari olan Kedi, Kopek, Kus c_
lasslari icerisinden ve main dosyasi icerisinden direkt olarak erisilemez. Hayvan classinin
subclasslari icerisinden veya main dosyasi icerisinden isim uyesine erisilmek istendiginde ise
setIsim() ve getIsim() fonksiyonlari kullanilmalidir. */
	string isim;

public:

	Hayvan(string _isim);
	void beslen();
	void uyu();
	void setIsim(string _isim);
	string getIsim();
};


