

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

void birSeylerYap(Hayvan* h) {
	h->sesCikar();
	h->beslen();
	h->sesCikar();
}

int main() {

	Kus* nazli;
	nazli = new Kus();
	birSeylerYap(nazli);

	return 0;
}

Yukaridaki kodun ciktisi ne olur?
*/

int main() {

	cout << "Kodun ciktisi:\n\n";
	cout << "cik cik cik...\n";
	cout << "Hayvan sinifinin beslen fonksiyonu cagrildi.\n";
	cout << "cik cik cik...\n\n";

	return 0;
}