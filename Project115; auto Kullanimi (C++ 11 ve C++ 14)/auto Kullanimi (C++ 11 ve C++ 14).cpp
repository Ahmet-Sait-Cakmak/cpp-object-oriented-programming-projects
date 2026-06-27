// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include <iostream>

using namespace std;

// C++ 11 kullanan IDE'lerde auto veri tipinde deger donduren fonksiyon kullanimi
auto topla(int x, int y) -> int {

	return (x + y);
}

// C++ 14 kullanan IDE'lerde auto veri tipinde deger donduren fonksiyon kullanimi
auto cikar(int x, int y) {

	return (x - y);
}


int main() {

	auto sayi = 10; // sayi degiskeni imt olarak belirlenir

	auto metin = "Hello C++"; // metin degiskeni string olarak belirlenir

	auto ondalik = 3.14; // ondalik degiskeni double olarak belirlenir

	cout << "Sayi: " << sayi << endl;
	cout << "Metin: " << metin << endl;
	cout << "Ondalik: " << ondalik << endl << endl;

	cout << "Toplam: " << topla(3, 2) << endl;
	cout << "Fark: " << cikar(3, 2) << endl << endl;

	auto sonuc = cikar(20, 10);
	cout << "Sonuc: " << sonuc << endl;

	return 0;
}