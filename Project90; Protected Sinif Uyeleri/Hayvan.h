#pragma once

#include <iostream>

using namespace std;

class Hayvan {

/* Hayvan classina ait protected olarak tanimlanmis isim uyesine hayvan classi icinden ve hay_
van classinin subclasslari olan Kedi, Kopek ve Kus ckasslari icinden direkt olarak erisilebi_
lir, ancak isim uyesine main dosyasi icinden erisilmek istendiğinde ise setIsim() ve getIsim()
fonksiyonlari kullanilmalidir.*/
protected:
	
	string isim;

public:

	Hayvan(string _isim);
	void beslen();
	void uyu();
	void setIsim(string _isim);
	string getIsim();
};



