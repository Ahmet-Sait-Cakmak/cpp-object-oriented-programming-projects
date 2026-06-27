// Bu konuyu anlamak veya tekrar etmek icin bu konunun videosunu udemy'dan izle.

#include <iostream>

using namespace std;

int main() {

	int x = 7;
	int y = 8;

	int *ptr; // Pointer icinde adres tutan yapidir.
	
    cout << "y degiskeninin degeri: " << y << endl;

	ptr = &y; // & operatoru ile y'nin adresini ptr'ye atadik.

	cout << *ptr << endl; // * operatoru ile ptr'nin gosterdigi adresteki degeri (y'nin de_
	// gerini) yazdirdik.
	
	*ptr = 9; // * operatoru ile ptr'nin gosterdigi adresteki degeri 9 yaptik. Yani y'nin 
	// degerini 9 yaptik.

	cout << *ptr << endl;
	cout << "y degiskeninin yeni degeri: " << y << endl << endl;


	cout << "x degiskeninin degeri: " << x << endl;

	ptr = &x; // & operatoru ile x'in adresini ptr'ye atadik.

	cout << *ptr << endl; // * operatoru ile ptr'nin gosterdigi adresteki degeri (x'in de_
	// gerini) yazdirdik.

	*ptr = 20; // * operatoru ile ptr'nin gosterdigi adresteki degeri 20 yaptik. Yani x'in 
	// degerini 20 yaptik.

	cout << *ptr << endl;
	cout << "x degiskeninin yeni degeri: " << x << endl;

	return 0;
}