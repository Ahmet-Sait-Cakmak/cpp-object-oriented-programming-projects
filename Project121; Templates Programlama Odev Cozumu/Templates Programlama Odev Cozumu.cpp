// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

/*
Template, C++'ta farkli veri tipleriyle calisabilen fonksiyonlar veya siniflar yazmamizi sag_
lar. Yani ayni kodu tekrar yazmadan, hem int, hem double, hem string gibi farkli tipler icin
kullanabiliriz.
*/

#include <iostream>

using namespace std;

template<typename T, typename U, typename V>

class Dikdortgen {

private:

	T en;
	U boy;

public:

	Dikdortgen(T _en, U _boy) {

		en = _en;
		boy = _boy;
	}

	V alanYazdir() {
		
		return en * boy;
	}

	void goster() {

		cout << "En: " << en << endl;
		cout << "Boy: " << boy << endl;
	}
};

template<typename T, typename U, typename V>
V cikar(T _a, U _b) {

	return _a - _b;
}

int main() {

	Dikdortgen<int, int, int>dikdortgen1(5, 10);
	dikdortgen1.goster();
	cout << "Alan: " << dikdortgen1.alanYazdir() << endl << endl;

	Dikdortgen<int, double, double>dikdortgen2(3, 7.2);
	dikdortgen2.goster();
	cout << "Alan: " << dikdortgen2.alanYazdir() << endl << endl;


	Dikdortgen<double, int, double>dikdortgen3(4.8, 6);
	dikdortgen3.goster();
	cout << "Alan: " << dikdortgen3.alanYazdir() << endl << endl;

	Dikdortgen<double, double, double>dikdortgen4(3.5, 2.9);
	dikdortgen4.goster();
	cout << "Alan: " << dikdortgen4.alanYazdir() << endl << endl << endl;

	cout << "int deger - int deger = int deger: " << cikar<int, int, int>(120, 87);
	cout << "\nint deger - double deger = double deger: " << cikar<int, double, double>(2, 4.5);
	cout << "\ndouble deger - int deger = double deger: " << cikar<double, int, double>(3.8, 6);
	cout << "\ndouble deger - double deger = double deger: " << cikar<double, double, double>(8.9, 13.7);

	cout << endl << endl;

	return 0;
}
	
