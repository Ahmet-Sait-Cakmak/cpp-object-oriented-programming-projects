#include<iostream>
#include<string>
#include<map>

using namespace std;

int main() {

	map<int, float> mOgrenciler; /* Key == int, value == float olacak sekilde map sinifindan bir
	nesne olusturduk. */

	// Map'e eleman ekleme
	mOgrenciler[101] = 85.5; // Key == 101, value == 85.5
	mOgrenciler[103] = 90.3; // Key == 103, value == 90.3
	mOgrenciler[100] = 78.8; // Key == 100, value == 78.8

	// insert metodunu kullanarak map sinifindan bir nesneye eleman ekleme
	mOgrenciler.insert({ 102, 88.0 }); // Key == 102, value == 88.0

	// map sinifindan bir nesnenin icerisinden erase metodu ile eleman silme
	int ogrenciNo;

	cout << "Lutfen silmek istediginiz ogrencinin numarasini giriniz: ";

	cin >> ogrenciNo;

	cout << endl;

	if (mOgrenciler.find(ogrenciNo) != mOgrenciler.end()) { // find metodu aranan key'i bulamazsa end() iteratorunu dondurur

		mOgrenciler.erase(ogrenciNo); // erase metodu ile belirtilen key'e sahip eleman silinir

		cout << ogrenciNo << " numarali ogrenci silindi.\n";

		cout << "\nOgrenci Numaralari ve Not Ortalamalari:\n\n";

		for (const auto& ogr : mOgrenciler) {
			cout << "Ogrenci Numarasi: " << ogr.first << ", Not Ortalamasi: " << ogr.second << endl;
		}
	}
	else {
		cout << ogrenciNo << " numarali ogrenci map icinde mevcut degil." << endl;
	}

	return 0;
}
