// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include <iostream>

using namespace std;

int main() {

	try {

		int x = 30;

		int y;

		cout << "Lutfen y degiskeni icin pozitif bir tam sayi giriniz: ";

		cin >> y;

		if (y == 0)
			throw 100;
		else if (y < 0)
			throw 101;
		else {

			float z = (float)x / y;

			cout << "\n30 / " << y << " = " << z << endl;
		}
	}
	catch (int hataKodu) {

		if (hataKodu == 100)
			cout << "\n0 girdiniz.";

		else if (hataKodu == 101) {

			cout << "\nNegatif bir tam sayi girdiniz.\n\n";
			
			return -1;
		}
	}

	cout << "\n\nbye....\n";

	return 0;
}