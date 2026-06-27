#pragma once

#include <iostream>

using namespace std;

class Hesap {

private:

	string ad;

	int hesapNo;

	float bakiye;

public:

	Hesap(string _ad, int _hesapNo, float _bakiye);

	void hesaba_para_yatir(float _paraMiktari);

	void hesaptan_para_cek(float _paraMiktari);

	void hesap_bilgilerini_goruntule();

};
