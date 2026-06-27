#include <iostream>

using namespace std;

int main() {
	int sayi1, sayi2;
	cout << "Lutfen 1. sayiyi giriniz: " ;
	cin >> sayi1;
	cout << "Lutfen 2. sayiyi giriniz: ";
	cin >> sayi2;

	if (sayi1 > 0 && sayi2 > 0) {

		cout << "\nIki sayi da pozitiftir." << endl;
	} 
	
	else if (sayi1 < 0 && sayi2 < 0) {

		cout << "\nIki sayi da negatiftir." << endl;
	}

	else if (sayi1 == 0 || sayi2 == 0) {
		
		cout << "\nSayilardan en az biri sifirdir." << endl;
	}
	
	else {
		
		cout << "\nSayilardan biri pozitif biri negatiftir." << endl;
	}

	int x = 5;

	if (!(x != 5)) {
		
		cout << "\n\nx'in degeri 5'e esittir." << endl;
	} 
	
	else {
		
		cout << "\n\nx'in degeri 5'e esit degildir." << endl;
	}


	int y = 3;

	if (!(y > 3)) {

		cout << "\ny'nin degeri 3'e esittir.\n";
	}

	else {

		cout << "\ny'nin degeri 3'e esit degildir.\n";
	}


	bool flag = false;

	if (!flag) {

		cout << "\n\nValue of the flag is false.\n\n\n";
	}

	return 0;
}