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

	cout << "\nOgrenci Numaralari ve Not Ortalamalari:\n\n";

	for (const auto& ogr : mOgrenciler) {
		cout << "Ogrenci Numarasi: " << ogr.first << ", Not Ortalamasi: " << ogr.second << endl;
	}

	/* map sinifindan bir nesnenin icerisine, o nesnenin icersinde bulunan elemanlardan biri_
	nin key degeri ile ayni key degerine sahip bir eleman eklemek istersek, mevcut eleman gun_
	cellenir. */
	mOgrenciler[102] = 92.5; // Key 102'ye sahip elemanin value'su 92.5 olarak guncellenir

	cout << "\n\nOgrenci Numaralari ve Not Ortalamalari:\n\n";

	for (const auto& ogr : mOgrenciler) {
		cout << "Ogrenci Numarasi: " << ogr.first << ", Not Ortalamasi: " << ogr.second << endl;
	}

	return 0;
}
