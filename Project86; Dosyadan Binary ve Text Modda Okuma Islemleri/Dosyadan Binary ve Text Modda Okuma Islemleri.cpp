#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
ifstream: ifstream is input file stream which allows you to read the contents of a file.

ofstream: ofstream is output file stream which allows you to write contents to a file.

fstream: fstream allows both reading from and writing to files by default. However, you can
have an fstream behave like an ifstream or ofstream by passing in the ios::open_mode flag.
*/

int main() {

	fstream file;

	file.open("C:\\Users\\ahmet\\Desktop\\C++\\Project85; Dosyaya Binary ve Text Modda Yazma Islemleri\\yazdirmaDosyasi.txt", ios::in | ios::binary);

	if (!file.is_open())
		cout << "Dosya acilamiyor!\n\n";
	else {
		string str;
		/* getline(..., ...) fonksiyonu string.h kutuphanesine ait bir fonksiyondur ve bu
		fonksiyonun kullanim amaclarindan biri .txt dosyalarindaki metinleri string veri ti_
		pindeki degiskenlere atamaktir. getline(..., ...) fonksiyonu bir .txt dosyasindan 
		tek seferde 1 satir kadarlik bir metni string veri tipindeki degiskene atar. */
		while (getline(file, str)) {
			cout << str << endl;
		}

		file.close();
	}

	cout << endl;

	return 0;
}