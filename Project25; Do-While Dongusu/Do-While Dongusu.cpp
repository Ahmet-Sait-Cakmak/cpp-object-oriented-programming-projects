#include <iostream>

using namespace std;

int main() {

	/*
	
	do {
	// yapilacak islem 1
	// yapilacak islem 2
	// ...
	} 
	
	while (kosul);

	*/

	int sifre = 1234, index = 0;
	int input;

	do {
		
		index = index + 1;
		
		if (index == 1) {

			cout << "Lutfen sifreyi giriniz: ";
		}
		
		else {
			
			cout << "\nHatali sifre girdiniz. Lutfen sifreyi tekrar giriniz: ";
		}
		
		cin >> input;
	}

	while (input != sifre);

	cout << "\n\nTebrikler! Sifreyi dogru girdiniz." << endl;
}