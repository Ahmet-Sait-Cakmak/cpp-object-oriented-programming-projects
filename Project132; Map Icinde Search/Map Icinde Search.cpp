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

	// map sinifindan bir nesne icinde find metodu ile eleman arama
	int ogrenciNo;

	cout << "Lutfen aramak istediginiz ogrencinin numarasini giriniz: ";

	cin >> ogrenciNo;

	cout << endl;

	if (mOgrenciler.find(ogrenciNo) != mOgrenciler.end()) { // find metodu aranan key'i bulamazsa end() iteratorunu dondurur
		cout << ogrenciNo << " numarali ogrencinin not ortalamasi: " << mOgrenciler[ogrenciNo] << endl; // Key'i kullanarak value'ya erisim
	}
	else {
		cout << ogrenciNo << " numarali ogrenci map icinde mevcut degil." << endl;

	}

	return 0;
}
