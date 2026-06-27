#pragma once

#include <iostream>

using namespace std;


class Otomobil {

	string model;
	string renk;
	int beygirGucu;


public:

	// Constructor
	Otomobil(string _model, string _renk, int _beygirGucu, int _modelYili, int _KS);

	// Destructor
	~Otomobil();


	void ruhsatBilgileriGoster();

	void setOtomobilModel(string _model);
	string getOtomobilModel();

	void setOtomobilRenk(string _renk);
	string getOtomobilRenk();

	void setOtomobilBeygirGucu(int _beygirGucu);
	int getOtomobilBeygirGucu();

	int modelYili;

	int* pKapiSayisi;

};


