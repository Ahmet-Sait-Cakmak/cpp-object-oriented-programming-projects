#include<iostream>

using namespace std;

int main() {
	/*
	PREFIX
	-Artirma (++x) veya azaltma (--x) operatoru olarak kullanilir. ++ veya -- opera_
	toru degiskenin soluna yazilir.
	-x = x+1 iþlemi ++x iþlemine; x = x-1 iþlemi ise --x iþlemine denktir.
	-Once degiskenin mevcut degerini 1 artirir veya 1 azaltir, ardindan degiskenin ye_
	ni degeri kullanilir.
	*/

	int x = 7;
	int y = ++x; // once x'in degeri 1 artirilir, ardindan artirilmis x degeri y'ye atanir.
	cout << "x: " << x << endl;
	cout << "y: " << y << endl << endl;


	/*
	POSTFIX
	-Artirma (x++) veya azaltma (x--) operatoru olarak kullanilir. ++ veya -- opera_
	toru degiskenin sagina yazilir.
	-x = x+1 iþlemi x++ iþlemine; x = x-1 iþlemi ise x-- iþlemine denktir.
	-Once degiskenin mevcut degeri kullanilir, ardindan degiskenin degeri 1 artirilir
	veya 1 azaltilir. 
	*/

	int k = 7;
	int l = k++; /* once x degiskeninin mevcut degeri y'ye atanir, ardindan x degiskeninin 
	degeri 1 artirilir. */
	cout << "x: " << k<< endl;
	cout << "y: " << l << endl;

	return 0;
}