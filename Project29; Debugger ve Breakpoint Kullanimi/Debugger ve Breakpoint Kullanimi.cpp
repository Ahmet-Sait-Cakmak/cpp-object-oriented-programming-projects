#include <iostream>

using namespace std;

int main() {
	
	int x = 5;

	for (int i = 0; i <= 10; i++) {

		cout << i << endl;

		if (i == x) {

			break;
		}
	}

	cout << "\nBreak ile donguden cikildi.\n";

	return 0;
}

/*
Break point'i koydugun noktadan itibaren her (fn + F11)'e bastýðýnda sirasiyla tek bir kod blogu 
calisir.
*/

/*
Debugger ve breakpoint'in nasil calistiklarini anlamak icin mutlaka udemy'den bu konunun
videosunu izle, sadece koda bakarak anlaman imkansiza yakin.
*/