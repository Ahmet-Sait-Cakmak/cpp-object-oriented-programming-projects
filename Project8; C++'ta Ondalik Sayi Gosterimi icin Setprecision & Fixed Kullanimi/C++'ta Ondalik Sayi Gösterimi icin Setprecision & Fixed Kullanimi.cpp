#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	double deger = 123.456789;
	cout << deger << endl << endl;

	/* 
	setpercision(N) manipulatoru toplam anlamli digit sayisini ayarlar (bir sayinin
	ekrana basilacak toplam basmak sayisini (tam + ondalikli)  ayarlar).
	*/
	cout << setprecision(4) << deger << endl;

	/*
	bir sayinin noktadan sonraki digit sayisinin gösterimini ayarlamak icin fixed ma_
	nipulatoru ile setprecision(N) manipulatoru birlikte kullanilir.
	*/
	cout << fixed << setprecision(2) << deger << endl;

	return 0;
}