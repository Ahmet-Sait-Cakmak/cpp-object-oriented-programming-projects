#include <iostream>

using namespace std;

/*
While Dongusu (Loop):

*Onceden belirlenmis bir kosul bozulana kadar devam eder.
* Kosulun her kontrolunden sonra dongu icerisindeki islemler bir kez yapilir.
* Kosul bozulduktan sonraki ilk kontrolde dongu terk edilir.

while (kosul) {

    // yapilacak islem 1
	// yapilacak islem 2
	// ...
}

*/

int main() {

	int index = 0;

	while (index <= 3) {

		cout << "index degeri 3'ten kucuk!\n";
		index++;
	}
	cout << "\nindex: " << index;

	cout << "\nDongu sonlandi.\n";

return 0;
}

