#include <iostream>

using namespace std;

// Base class
class Hayvan {

public:

	virtual void sesCikar() {
		cout << "Hayvan sinifina ait sesCikar() metodu cagrildi.\n";
	}

	void yazdir() {
		cout << "Hayvan sinifina ait yazdir() metodu cagrildi.\n";
	}
};

// Child class : Kedi
class Kedi : public Hayvan {

public:

	void sesCikar() {
		cout << "miyav miyav...\n";
	}

	void yazdir() {
		cout << "Kedi sinifina ait yazdir() metodu cagrildi.\n";
	}
};

// Child class : Kopek
class Kopek : public Hayvan {

public:

	void sesCikar() {
		cout << "hav hav...\n";
	}

	void yazdir() {
		cout << "Kopek sinifina ait yazdir() metodu cagrildi.\n";
	}
};

void ucKezSesCikar(Hayvan* p) {
	for (int i = 0; i < 3; i++) {
		p->sesCikar();
	}
}

int main() {

	Hayvan* pHayvan;
	Kedi kedi1;
	pHayvan = &kedi1;

	ucKezSesCikar(pHayvan);
	cout << endl;
	ucKezSesCikar(&kedi1);

	cout << endl << endl;

	Kopek kopek1;
	pHayvan = &kopek1;

	ucKezSesCikar(pHayvan);
	cout << endl;
	ucKezSesCikar(&kopek1);

	return 0;
}