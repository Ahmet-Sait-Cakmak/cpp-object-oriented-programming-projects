#include <iostream>

using namespace std;

int main() {

	string isim; // tanimlama
	isim = "Ali"; // deger atama

	int yas = 22; // declaration ve initialization

	cout << "Bir zamanlar " << isim << " isminde bir genc varmis." << endl
		<< isim << " " << yas << " yasindaymis." << endl;

	isim = "Veli";
	yas = 25;

	cout << isim << " ismini sever ancak bulundugu " << yas << " yasini sevmezmis. Daha yasli olmak istermiþ.\n";

	return 0;
}
