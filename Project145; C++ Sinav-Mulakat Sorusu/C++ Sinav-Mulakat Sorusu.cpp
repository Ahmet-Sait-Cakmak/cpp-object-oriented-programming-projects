

#include <iostream>

using namespace std;

/*

// Base class
class Hayvan {

public:
	virtual void sesCikar() {
		cout << "Hayvan sinifinin sesCikar fonksiyonu cagrildi.\n";
	}

	void beslen() {
		cout << "Hayvan sinifinin beslen fonksiyonu cagrildi.\n";
	}
};

// Child class : Kedi
class Kedi : public Hayvan {

public:
	void sesCikar() {
		cout << "miyav miyav miyav...\n";
	}
	void beslen() {
		cout << "Kedi sutle besleniyor.\n";
	}
};

// Child class : Kus
Class Kus : public Hayvan {

public:
	void sesCikar() {
		cout << "cik cik cik...\n";
	}
	void beslen() {
		cout << "Kus yemle besleniyor.\n";
	}
};

int main() {

	Hayvan* pHayvan;
	Kus boncuk;
	Kedi kontes;

	cout << "1:\n";
	kontes.beslen();
	kontes.sesCikar();

	cout << "2:\n";
	pHayvan = &boncuk;
	pHayvan->beslen();
	pHayvan->sesCikar();

	return 0;
}

Yukaridaki kodun ciktisi ne olur?
*/

int main() {

	cout << "Kodun ciktisi:\n\n";
	cout << "1:\n";
	cout << "Kedi sutle besleniyor.\n";
	cout << "miyav miyav miyav...\n";
	cout << "2:\n";
	cout << "Hayvan sinifinin beslen fonksiyonu cagrildi.\n";
	cout << "cik cik cik...\n";

	return 0;
}