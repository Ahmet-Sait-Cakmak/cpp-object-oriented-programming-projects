#include"Ogrenci.h"

Ogrenci::Ogrenci(int _ID, string _ad, float _sinavNotu) {
	ID = _ID;
	ad = _ad;
	sinavNotu = _sinavNotu;
}

void Ogrenci::setID(int _ID) {
	ID = _ID;
}

void Ogrenci::setAd(string _ad) {
	ad = _ad;
}

void Ogrenci::setSinavNotu(float _sinavNotu) {
	sinavNotu = _sinavNotu;
}

int Ogrenci::getID() {
	return ID;
}

string Ogrenci::getAd() {
	return ad;
}

float Ogrenci::getSinavNotu() {
	return sinavNotu;
}

void Ogrenci::bilgileriGoster() {
	cout << "Ogrencinin ID'si: " << ID << ", Ogrencinin Adi: " << ad 
		 << ", Ogrencinin Sinav Notu: " << sinavNotu << endl;
}

