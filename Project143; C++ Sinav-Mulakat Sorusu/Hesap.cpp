#include "Hesap.h"

Hesap::Hesap(string _ad, int _hesapNo, float _bakiye) {

	bakiye = 0; // Hesaplarin bakiyelerinin ilk degerini 0 olarak atama
	ad = _ad;
	hesapNo = _hesapNo;
	bakiye = _bakiye;
}

void Hesap::hesaba_para_yatir(float _paraMiktari) {

	bakiye = bakiye + _paraMiktari; // == bakiye += _paraMiktari;

	cout << "Hesaba " << _paraMiktari << "TL yatirildi.\n\n";
}

void Hesap::hesaptan_para_cek(float _paraMiktari) {

	if (bakiye >= _paraMiktari) {

		bakiye = bakiye - _paraMiktari; // == bakiye -= _paraMiktari;

		cout << "Hesaptan " << _paraMiktari << "TL cekildi.\n\n";
	}
	else {
	    throw std::exception("Exception Mesaji: Bakiye yetersiz oldugundan para cekme islemi gerceklestirilemedi!\n");
	}
}

void Hesap::hesap_bilgilerini_goruntule() {

	cout << "\nHESAP BILGILERI\n\n"
		 << "Hesap Sahibi: " << ad << endl
		 << "Hesap Numarasi: " << hesapNo << endl
		 << "Bakiye: " << bakiye << endl << endl;
}
