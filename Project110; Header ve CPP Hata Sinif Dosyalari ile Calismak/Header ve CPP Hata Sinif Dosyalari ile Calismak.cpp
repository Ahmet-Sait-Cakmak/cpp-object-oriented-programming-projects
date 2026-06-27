// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include "HataSinifi.h"

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
	catch (HataSinifi _h) { // == catch (const HataSinifi &_h)

		cout << "\nException yakalandi! Hata mesaji: " << _h.getHataMesaji();
	}
	catch (int hataKodu) {

		cout << "\nException yakalandi! Hata kodu: " << hataKodu;

		if (hataKodu == 101)
			cout << ". Sifir sayisini girdiniz.\n";
	}

	cout << "\nbye...\n";

	return 0;
}