// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include <iostream>

using namespace std;

class HataSinifi {

private:

	string hataMesaji;

public:

	HataSinifi(string _hataMesaji) : hataMesaji(_hataMesaji) {};

	string getHataMesaji() {

		return hataMesaji;
	}
};

int main() {

	try {

		float x;

		cout << "Lutfen x degiskeni icin pozitif bir sayi giriniz: ";

		cin >> x;

		if (x < 0) {                                       // == if (x < 0) {
			                                               //        throw HataSinifi("Negatif bir sayi girdiniz.\n");
			HataSinifi h("Negatif bir sayi girdiniz.\n");  //    }
			throw h;
		}

		else if (x == 0)
			throw 101;

		else
			cout << endl << x << " sayisini girdiniz." << endl;
	}
	catch (...) { 

		cout << "\nException yakalandi.\n";
	}

	cout << "\nbye...\n";

	return 0;
}