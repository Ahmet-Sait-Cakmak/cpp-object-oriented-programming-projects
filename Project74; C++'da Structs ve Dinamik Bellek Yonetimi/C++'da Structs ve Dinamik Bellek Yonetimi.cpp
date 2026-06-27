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
	Ogrenci* ptr = new Ogrenci;

	cout << "Lutfen bir ogrenci numarasi giriniz: ";
	cin >> ptr->ogrenciNo;
	cin.ignore(); // Bu satır, önceki girişten kalan newline karakterini temizler.
	cout << "Lutfen bir ogrenci ismi giriniz: ";
	getline(cin, ptr->isim);
	cout << "Lutfen bir not ortalamasi giriniz: ";
	cin >> ptr->notOrtalamasi;

	cout << endl;


	cout << "Ogrenci No: " << ptr->ogrenciNo
		 << ", Isim: " << ptr->isim
		 << ", Not Ortalamasi: " << ptr->notOrtalamasi << endl;

	delete ptr; // Dinamik olarak ayrılan belleği serbest bırak

	return 0;
}