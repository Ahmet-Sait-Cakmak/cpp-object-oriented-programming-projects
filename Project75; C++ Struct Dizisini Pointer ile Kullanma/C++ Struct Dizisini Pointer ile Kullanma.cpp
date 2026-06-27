// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include <iostream>
#include <string>

using namespace std;

struct Ogrenci {
	int ogrenciNo;
	string isim;
	double notOrtalamasi;
};

int main() {
	int n;

	cout << "Kaydedilecek ogrenci adedini giriniz: ";
	cin >> n;

	// Heap bellekte ogrenci dizisi olusturma
	Ogrenci* ogrenciler = new Ogrenci[n];

	for (int i = 0; i < n; i++) {
		cout << "Lutfen " << (i + 1) << ". ogrencinin numarasini giriniz: ";
		cin >> (ogrenciler + i)->ogrenciNo;
		cin.ignore(); // Enter tuşunu temizle
		
		cout << "Lutfen " << (i + 1) << ". ogrencinin ismini giriniz: ";
		getline(cin, (ogrenciler + i)->isim);
		
		cout << "Lutfen " << (i + 1) << ". ogrencinin not ortalamasini giriniz: ";
		cin >> (ogrenciler + i)->notOrtalamasi;
		cout << endl;
	}

	cout << "\nOgrenci Listesi:\n\n";
	for (int i = 0; i < n; i++) {
		cout << (ogrenciler + i)->ogrenciNo << " -- " << (ogrenciler + i)->isim << " -- " <<
			(ogrenciler + i)->notOrtalamasi << endl;
	}

	delete[] ogrenciler;

	return 0;
}