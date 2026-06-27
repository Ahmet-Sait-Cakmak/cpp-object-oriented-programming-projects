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
	Ogrenci ogrenciler[3];

	for (int i = 0; i < 3; i++) {
		cout << "Lutfen " << (i + 1) << ". ogrencinin numarasini giriniz: ";
		cin >> ogrenciler[i].ogrenciNo;
		cin.ignore(); // Enter tuşunu temizle
		cout << "Lutfen " << (i + 1) << ". ogrencinin ismini giriniz: ";
		getline(cin, ogrenciler[i].isim);
		cout << "Lutfen " << (i + 1) << ". ogrencinin not ortalamasini giriniz: ";
		cin >> ogrenciler[i].notOrtalamasi;
		cout << endl;
	}

	cout << "\nOgrenci Listesi:\n\n";
	for (int i = 0; i < 3; i++) {
		cout << ogrenciler[i].ogrenciNo << " -- " << ogrenciler[i].isim << " -- " <<
			ogrenciler[i].notOrtalamasi << endl;
	}

	return 0;
}