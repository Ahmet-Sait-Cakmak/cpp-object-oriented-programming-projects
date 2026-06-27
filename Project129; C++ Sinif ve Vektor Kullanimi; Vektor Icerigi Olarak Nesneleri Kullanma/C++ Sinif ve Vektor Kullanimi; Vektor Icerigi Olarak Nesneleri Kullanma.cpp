#include<iostream>
#include<vector>
#include<string>

using namespace std;

// Otomobil sinifi
class Otomobil {

private:

	string marka;

	string model;

	int yil;

public:

	Otomobil(string _marka, string _model, int _yil) {

		marka = _marka;
		model = _model;
		yil = _yil;
	}

	void bilgileriGoster() const{

		cout << "Marka: " << marka << ", Model: " << model << ", Yil: " << yil << endl;
	}
};

int main() {
	
	// Otomobil nesnelerini tutacak bir vektor tanimlama ve o vektoru doldurma:
	vector<Otomobil> vGaraj;

	cout << "Garaja eklenen otomobiller:" << endl;
	vGaraj.push_back(Otomobil("Toyota", "Corolla", 2020));
	vGaraj.push_back(Otomobil("BMW", "X5", 2018));
	vGaraj.push_back(Otomobil("Mercedes", "C200", 2023));

	// Garaj vektorundeki otomobil nesnelerini listeleme:
	cout << "\nGarajdaki otomobiller:\n";
	cout << "------------------------\n";
	for (const Otomobil& oto : vGaraj) {
		oto.bilgileriGoster();
	}

	// Garaj vektorundeki bir otomobil nesnesini silme:
	cout << "\n\nGaraj vektorunden bir otomobil silme:\n";
	vGaraj.erase(vGaraj.begin() + 1); // garaj vektorunun 1. indexindeki elemanini silme

	// Garaj vektorundeki otomobilleri listeleme:
	cout << "\nGarajdaki otomobiller:\n";
	cout << "------------------------\n";
	for (const Otomobil& oto : vGaraj) {
		oto.bilgileriGoster();
	}

	// Garaj vektorune yeni bir otomobil nesnesi ekleme:
	cout << "\n\nGaraj vektorune yeni bir otomobil ekleme:\n";
	vGaraj.insert(vGaraj.begin() + 2, Otomobil("Audi", "A4", 2022)); // garaj vektorunun 2. indexine yeni bir otomobil ekleme

	// Garaj vektorundeki otomobilleri listeleme:
	cout << "\nGarajdaki otomobiller:\n";
	cout << "------------------------\n";
	for (const Otomobil& oto : vGaraj) {
		oto.bilgileriGoster();
	}

	// Garaj vektorunun basindaki otomobil nesnesinin bilgilerini yazdirma:
	cout << "\n\nGaraj vektorundeki ilk otomobilin bilgileri:\n";
	vGaraj[0].bilgileriGoster();

	// Garaj vektorunun sonundaki (en arkasindaki) otomobil nesnesinin bilgilerini yazdirma:
	cout << "\n\nGaraj vektorundeki son otomobilin bilgileri:\n";
	vGaraj[vGaraj.size() - 1].bilgileriGoster();

	return 0;
}