// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

/*
Template, C++'ta farkli veri tipleriyle calisabilen fonksiyonlar veya siniflar yazmamizi sag_
lar. Yani ayni kodu tekrar yazmadan, hem int, hem double, hem string gibi farkli tipler icin
kullanabiliriz.
*/

#include <iostream>

using namespace std;

template <typename T, typename U, typename V>
class Silindir {

private: 

	T yaricap;
	U yukseklik;
	V hacim;

public:

	Silindir(T _yaricap, U _yukseklik) {

		yaricap = _yaricap;
		yukseklik = _yukseklik;
		hacim = 3.14 * yaricap * yaricap * yukseklik;
	}

	void yazdir() {

		cout << "Yaricap: " << yaricap << endl;
		cout << "Yukseklik: " << yukseklik << endl;
		cout << "Hacim: " << hacim << endl;
	}

	void tabanAlani() {
		cout << "Taban Alani: " << 3.14 * yaricap * yaricap << endl;
	}



};

int main() {
	/* yaricap ve yukseklik uye degiskenleri int; hacim uye degiskeni double veri tipinde o_
	lan Silindir sinifina ait silindir1 isimli obje: */
	Silindir<int, int, double> silindir1(5, 10);
	silindir1.yazdir();
	silindir1.tabanAlani();

	cout << endl;

	/* yaricap uye degiskeni int, yukseklik ve hacim uye degiskenleri double veri tipinde o_
	lan Silindir sinifina ait silindir2 isimli obje: */
	Silindir<int, double, double> silindir2(3, 4.7);
	silindir2.yazdir();
	silindir2.tabanAlani();

	cout << endl;


	/* yaricap ve hacim uye degiskenleri double; yukseklik uye degiskeni int veri tipinde olan
	Silindir sinifina ait silindir3 isimli obje: */
	Silindir<double, int, double> silindir3(2.8, 6);
	silindir3.yazdir();
	silindir3.tabanAlani();

	cout << endl;

	/* yaricap, hacim  ve yukseklik uye degiskenleri double veri tipinde olan Silindir sini_
	fina ait silindir4 isimli obje: */
	Silindir<double, double, double> silindir4(3.5, 7.6);
	silindir4.yazdir();
	silindir4.tabanAlani();

	return 0;
}