#pragma once

#include "Hayvan.h"

class Kopek : public Hayvan {

public:

	Kopek(string _isim);
	~Kopek();
	void havla();

	// static fonksiyonlar header dosyasinin icinde tanimlanmalidir.
	static int getKopekSayisi() {
		return kopekSayisi;
	}

	static int karesiniHesapla(int sayi) {
		return (sayi * sayi);
	}

private:

	static int kopekSayisi;
};


