#include<iostream>
#include<string>
#include<map>

using namespace std;

int main() {

	map<int, float> mOgrenciler; /* Key == int, value == float olacak sekilde map sinifindan bir 
	nesne olusturduk. */


	// Map sinifindan bir nesneye eleman ekleme
	mOgrenciler[101] = 85.5; // Key == 101, value == 85.5
	mOgrenciler[103] = 90.3; // Key == 103, value == 90.3
	mOgrenciler[100] = 78.8; // Key == 100, value == 78.8


	// insert metodunu kullanarak map sinifindan bir nesneye eleman ekleme
	mOgrenciler.insert({ 102, 88.0 }); // Key == 102, value == 88.0


	// map sinifindan bir nesnenin elemanlarini ekrana yazdirma
	cout << "\nOgrenci Numaralari ve Not Ortalamalari:\n\n";
	
	for (const pair<int, float> &ogr : mOgrenciler) {
		cout << "Ogrenci Numarasi: " << ogr.first << ", Not Ortalamasi: " << ogr.second << endl;
	}

	/*
	
	Yukaridaki for dongusunun baska bir alternatifi:

	for (const auto &ogr : mOgrenciler) {
		cout << "Ogrenci Numarasi: " << ogr.first << ", Not Ortalamasi: " << ogr.second << endl;
	}

	*/

	/*

	Yukaridaki for dongusunun baska bir alternatifi:
	map<int, float>::iterator it;
	for (it = mOgrenciler.begin(); it != mOgrenciler.end(); ++it) {
		cout << "Ogrenci Numarasi: " << it->first << ", Not Ortalamasi: " << it->second << endl;
	}

	*/

	return 0;
}
