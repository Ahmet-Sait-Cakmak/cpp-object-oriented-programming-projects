#include <iostream>

using namespace std;

class Kadro {

private:

	string kadroTipi;

	double maasKatsayisi;

public:

	Kadro(string _kadroTipi = "Standart", double _maasKatsayi = 1.0) {

		kadroTipi = _kadroTipi;
		maasKatsayisi = _maasKatsayi;
	}

	void yazdir() {

		cout << "Kadro Tipi: " << kadroTipi << ", Maas Katsayisi: " << maasKatsayisi << endl;
	}

};

int main() {

	Kadro k1;
	k1.yazdir(); // Varsayilan degerler yazdirilir.

	Kadro k2("Uzman", 1.5);
	k2.yazdir(); // Parametreli constructor ile atanan degerler yazdirilir.

	return 0;
}