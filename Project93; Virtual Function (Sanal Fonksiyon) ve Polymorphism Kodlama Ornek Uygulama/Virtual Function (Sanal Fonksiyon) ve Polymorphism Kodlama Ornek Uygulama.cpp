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

int main() {

	Hayvan* pHayvan;
	Kedi kedi1;
	pHayvan = &kedi1;

	pHayvan->sesCikar();
	pHayvan->yazdir();
	kedi1.sesCikar();
	kedi1.yazdir();

	cout << endl << endl;

	Kopek kopek1;
	pHayvan = &kopek1;
	
	pHayvan->sesCikar();
	pHayvan->yazdir();
	kopek1.sesCikar();
	kopek1.yazdir();

	return 0;
}