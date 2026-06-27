#include <iostream>

using namespace std;

int main() {

	/*
	C++'ta Break Kullanimi:Break ifadesi, bir donguyu veya switch ifadesini sonlandirmak 
	icin kullanilir.
	*/

	cout << "Icerisinde break kullanilan dongunun ciktilari:\n\n";

	for (int i = 0; i <= 5; i++) {

		if (i == 3) {
		    break; // Dongu burada sonlanir
        }

		cout << i << endl;
	}

	cout << "\n\nIcerisinde continue kullanilan dongunun ciktilari:\n\n";

	for (int i = 0; i <= 5; i++) {

		if (i == 3) {

			continue; // 3 degeri atlanir ve sonraki iterasyona gecilir
		}

		cout << i << endl;
	}

	cout << endl;

	return 0;
}