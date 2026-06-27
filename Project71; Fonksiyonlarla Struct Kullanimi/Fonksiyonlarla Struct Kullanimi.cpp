// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include <iostream>

using namespace std;

struct Ogrenci {
	int ogrenciNo;
	string isim;
	double notOrtalamasi;
};

// call by value ile tek bir ogrenci icin durum yazdirma:
void ogrenciDurumYazdir1(Ogrenci ogr) {
	ogr.ogrenciNo = 190;
	if (ogr.notOrtalamasi < 50) {
		cout << ogr.isim << " sinifta kaldi!\n";
	}
	else {
		cout << ogr.isim << " sinifi gecti!\n";
	}
}

// call by reference ile tek bir ogrenci icin durum yazdirma:
void ogrenciDurumYazdir2(Ogrenci &ogr) {
	ogr.ogrenciNo = 190;
	if (ogr.notOrtalamasi < 50) {
		cout << ogr.isim << " sinifta kaldi!\n";
	}
	else {
		cout << ogr.isim << " sinifi gecti!\n";
	}
}

int main() {
	Ogrenci ogrenci1 = { 101, "Ali Kaya", 58.5 };
	// call by value
	ogrenciDurumYazdir1(ogrenci1);
	cout << "ogrencinin ismi: " << ogrenci1.isim << ", ogrenci no: " << ogrenci1.ogrenciNo;
	cout << endl << endl;

	// call by reference
	ogrenciDurumYazdir2(ogrenci1);
	cout << "ogrencinin ismi: " << ogrenci1.isim << ", ogrenci no: " << ogrenci1.ogrenciNo;
	cout << endl << endl;

	return 0;
}