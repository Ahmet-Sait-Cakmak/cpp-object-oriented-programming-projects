#pragma once

#include <iostream>
#include <string>
#include <list>

using namespace std;

class Ogrenci {

private:

	int ID;

	string ad;

	float sinavNotu;

public:

	Ogrenci(int _ID, string _ad, float _sinavNotu);

	void setID(int _ID);

	void setAd(string _ad);

	void setSinavNotu(float _sinavNotu);

	int getID();

	string getAd();

	float getSinavNotu();

	void bilgileriGoster();
};
