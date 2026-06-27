#include <iostream>

using namespace std;

int main() {

	string isim;
	cout << "Lutfen isminizi giriniz: ";
	cin >> isim;
	cout << "\nMerhaba, " << isim << "!" << endl << endl;

	int en, boy, alan;
	cout << "Lutfen dikdortgenin enini giriniz: ";
	cin >> en;
	cout << "Lutfen dikdortgenin boyunu giriniz: ";
	cin >> boy;

	// hesaplama islemi

	alan = en * boy;

	cout << "\nDikdortgenin alani " << alan << " birimdir.\n";

	return 0;
}