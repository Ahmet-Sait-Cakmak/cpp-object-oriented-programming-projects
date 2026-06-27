// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include <iostream>

using namespace std;

int main() {

	int x = 6;
	float y = 5;
	
	auto toplam = [](auto a, auto b) {return a + b; };

	auto sonuc = toplam(x, y); // lambdayi cagirma

	cout << "sonuc: " << sonuc << endl << endl;


	int count = 0;

	// [] => [&], lambda fonksiyonunun uzerindeki tum dis degiskenleri referans olarak yakalar.
	auto arttir1 = [&]() {

		++x;
		--y;
		count = x * y;
		};

	// Lambdayi birkaç kez cagiralim
	arttir1();
	arttir1();
	arttir1();

	cout << "count: " << count << endl << endl;


	/* [=] => lambda fonksiyonunun uzerindeki tum dis degiskenler kopyalanacak ve kopyalanmis
	degiskenler uzerinde islem yapilacak, dis degiskenlere hicbir şey olmayacak. */
	auto arttir2 = [=]() mutable {
		++count;
		++x;
		++y;
		cout << "Lambda icindeki count: " << count << endl;
		cout << "Lambda icindeki x: " << x << endl;
		cout << "Lambda icindeki y: " << y << endl << endl;
		};

	// Lambdayi birkaç kez cagiralim
	arttir2();
	arttir2();
	arttir2();

	cout << "\nAsil count: " << count << endl;
	cout << "Asil x: " << x << endl;
	cout << "Asil y: " << y << endl << endl;



}