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

	file.open("C:\\Users\\ahmet\\Desktop\\C++\\Project85; Dosyaya Binary ve Text Modda Yazma Islemleri\\yazdirmaDosyasi.txt", ios::out | ios::binary);

	if (!file.is_open())
		cout << "Dosya acilamiyor!\n\n";
	else {
		string str1 = "Hello World!";
		
		file << str1 << endl;

		file.close();
	}

	file.open("C:\\Users\\ahmet\\Desktop\\C++\\Project85; Dosyaya Binary ve Text Modda Yazma Islemleri\\yazdirmaDosyasi.txt", ios::out | ios::binary | ios::app);

	if (!file.is_open())
		cout << "Dosya acilamiyor!";
	else {
		string str2 = "Merhaba Dunya!";

		file << str2 << endl;

		file.close();
	}

	cout << endl; 

	return 0;
}