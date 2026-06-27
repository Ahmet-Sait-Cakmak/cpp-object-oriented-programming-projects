#pragma once

#include <iostream>

using namespace std;

class Ogrenci {

private:

	string ad;

	float not1;

	float not2;

public:

	Ogrenci(string _ad, float _not1, float _not2);

	/* Eger y isimli bir sinifin; x isimli bir sinifin private veya protected uyelerine direkt
	olarak erisebilmesini istiyorsak y isimli sinifi, x isimli sinifin icinde friend imzasi i_
	le tanimlamak zorundayiz. */

	/* Bir classin icinde friend imzali bir class tanimlanacak ise o class public, private ve_
	ya protected olarak tanimlanabilir. */
	friend class Hesaplayici;

};
