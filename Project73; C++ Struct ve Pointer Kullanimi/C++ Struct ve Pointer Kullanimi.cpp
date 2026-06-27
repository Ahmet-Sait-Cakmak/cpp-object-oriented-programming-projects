// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include <iostream>

using namespace std;

struct Ogrenci {
	int ogrenciNo;
	string isim;
	double notOrtalamasi;
};



int main() {
	Ogrenci ogrenci1 = { 101, "Ali Kaya", 85.0 };
	Ogrenci* ptr = &ogrenci1;

	cout << "Ogrenci No: " << ptr->ogrenciNo
		<< ", Isim: " << ptr->isim
		<< ", Not Ortalamasi: " << ptr->notOrtalamasi << endl;
	
	
	Ogrenci ogrenci2 = { 102, "Ayse Demir", 70.2 };
	ptr = &ogrenci2;
	
	cout << "Ogrenci No: " << ptr->ogrenciNo
		<< ", Isim: " << ptr->isim
		<< ", Not Ortalamasi: " << ptr->notOrtalamasi << endl;

	return 0;
}