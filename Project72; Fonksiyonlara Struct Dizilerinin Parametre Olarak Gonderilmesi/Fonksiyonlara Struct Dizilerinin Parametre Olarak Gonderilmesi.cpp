// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include <iostream>

using namespace std;

struct Ogrenci {
	int ogrenciNo;
	string isim;
	double notOrtalamasi;
};


// call by reference ile tek bir ogrenci icin durum yazdirma:
void ogrenciDurumYazdir(Ogrenci& ogr) {
	if (ogr.notOrtalamasi < 50) {
		cout << "Durum: Sinifta kaldi!\n";
	}
	else {
		cout << "Durum: Sinifi gecti!\n";
	}
}

/* call by reference ile tum ogrencilerin bilgilerini yazdirma (diziler, fonksiyonlarin icine
sadece call by reference yontemi ile gonderilebilirler.) */
void tumOgrencilerinBilgileriniYazdir(Ogrenci students[], int size) {
	cout << "\n* * Ogrenci Bilgileri * *\n\n";
	for (int i = 0; i < size; i++) {
		cout << students[i].ogrenciNo << " | " <<
			    students[i].isim << " | " << 
			    students[i].notOrtalamasi << " | ";

		ogrenciDurumYazdir(students[i]);
	}
}
int main() {
	Ogrenci ogrenciler[3] = {
		{ 101, "Ali Kaya", 58.5 },
		{ 102, "Elif Demir", 45.0 },
		{ 103, "Kaan Kara", 75.3 }
	};

	// call by reference
	tumOgrencilerinBilgileriniYazdir(ogrenciler, 3);

	return 0;
}