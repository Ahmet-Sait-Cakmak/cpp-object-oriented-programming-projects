#include <iostream>

using namespace std;

class Otomobil {

private:

	string marka;

public:

	int yil;

	Otomobil(string _marka, int _yil) {
		marka = _marka;
		yil = _yil;
	}

	/* Bir classin icinde imzasi friend olarak tanimlanmis olan bir fonksiyon, o classin ici_
	ndeki private veya protected olarak tanimli olan uyelere erisebilir. */

	/* Bir classin icinde friend imzali bir fonksiyon tanimlanacak ise o fonksiyon public, p_
	rivate veya protected olarak tanimlanabilir. */
	friend void bilgileriGoster(Otomobil oto);
};

void bilgileriGoster(Otomobil oto) {

	cout << "Marka: " << oto.marka << ", Yil: " << oto.yil << endl;
}

int main() {
	
	Otomobil otomobil1("Lexus", 2026);

	bilgileriGoster(otomobil1);

	return 0;
}

