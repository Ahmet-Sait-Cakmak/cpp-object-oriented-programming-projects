#pragma once

#include "Hayvan.h"

class Kopek : public Hayvan {

public:

	Kopek(string _isim);
	~Kopek();
	void havla();

	static int kopekSayisi;
};

