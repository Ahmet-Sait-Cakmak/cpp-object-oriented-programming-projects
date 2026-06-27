#pragma once

#include <iostream>

using namespace std;


class Otomobil {

public:

	string model;
	string renk;
	int beygirGucu;

	Otomobil(string _model, string _renk, int _beygirGucu);
	
	void ruhsatBilgileriGoster();	
};
