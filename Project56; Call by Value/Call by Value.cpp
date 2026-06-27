#include <iostream>

using namespace std;

void degistir(int deger) {
	deger = deger * 2;
	cout << "deger: " << deger << endl << endl;
}

int main() {
	
	int sayi = 5;

	degistir(sayi);

	cout << "sayi: " << sayi << endl;

	return 0;
}