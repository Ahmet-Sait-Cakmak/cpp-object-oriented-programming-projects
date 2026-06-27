/*

Asagidaki gereksinimlere uygun bir C++ programi yaziniz:

1) Kare adinda bir sinif olusturun. Bu sinif, bir karenin kenar uzunlugunu (kenar) tutmalidir.

2) + operatorunu asiri yukleyerek kare sinifina ait iki farkli nesnesinin kenar uzunluklarini
toplayan ve yeni bir kare nesnesi donduren bir fonksiyon tanimlayin.

3) << operatorunu asiri yukleyerek, bir kare nesnesinin kenar uzunlugunu ve alanini ekrana
yazdiran bir fonksiyon tanimlayin.

4) main fonksiyonu icinde kare sinifina ait en az iki tane nesne olusturun. Bu nesneleri top_
layin ve cout ile ekrana yazdirin. Programinizin ciktisi her bir kare nesnesinin kenar uzun_
lugunu ve alanini icermelidir.

*/

#include <iostream>

using namespace std;

class Kare {

	double kenar;

public:

	Kare(double _kenar = 1) : kenar(_kenar) {}

	Kare operator+(const Kare &_k) {

		Kare toplam;

		toplam.kenar = kenar + _k.kenar;

		return toplam;
	}

	friend ostream & operator<<(ostream& _cout, const Kare &_k) {

		_cout << "Kenar uzunlugu " << _k.kenar << " birim olan karenin alani "
			<< _k.kenar * _k.kenar << " birim karedir." << endl;

		return _cout;
	}
};

int main() {

	Kare k1(3);
	Kare k2(5);

	Kare k3 = k1 + k2;

	cout << k1 << endl;

	cout << k2 << endl;

	cout << k3 << endl;

	return 0;
}