// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include <iostream>

using namespace std;

struct Ogrenci {
	int ogrenciNo;
	string isim;
	double notOrtalamasi;
};

int main() {
	// 1. Yontem
	Ogrenci ogrenci1;
	ogrenci1.ogrenciNo = 100;
	ogrenci1.isim = "Ahmet Yilmaz";
	ogrenci1.notOrtalamasi = 85.5;

	// 2. Yontem
	Ogrenci ogrenci2 = { 102, "Ali Kaya", 90.2 }; // 2. Yontem dizilerde kullanilmaz.

	cout << "Ogrenci1'in bilgileri:" << endl;
	cout << "Ogrenci1'in numarasi = " << ogrenci1.ogrenciNo << endl;
	cout << "Ogrenci1'in ismi = " << ogrenci1.isim << endl;
	cout << "Ogrenci1'in not ortalamasi = " << ogrenci1.notOrtalamasi << endl << endl;

	cout << "Ogrenci2'in bilgileri:" << endl;
	cout << "Ogrenci2'in numarasi = " << ogrenci2.ogrenciNo << endl;
	cout << "Ogrenci2'in ismi = " << ogrenci2.isim << endl;
	cout << "Ogrenci2'in not ortalamasi = " << ogrenci2.notOrtalamasi << endl << endl;

	return 0;
}