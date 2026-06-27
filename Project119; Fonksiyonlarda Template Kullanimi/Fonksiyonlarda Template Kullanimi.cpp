// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

/* 
Template, C++'ta farkli veri tipleriyle calisabilen fonksiyonlar veya siniflar yazmamizi sag_
lar. Yani ayni kodu tekrar yazmadan, hem int, hem double, hem string gibi farkli tipler icin
kullanabiliriz.
*/

#include <iostream>

using namespace std;


int topla1(int a, int b) {

	return a + b;
}


double topla1(int a, double b) {

	return a + b;
}


double topla1(double a, int b) {

	return a + b;
}


double topla1(double a, double b) {

	return a + b;
}

string topla1(string a, string b) {
	
	return a + b;
}

template <typename T, typename U, typename V>
V topla2(T a, U b) {

	return a + b;
}

int main() {

	cout << topla1(3, 4) << endl; // 7
	cout << topla1(5, 6.1) << endl; // 11.1
	cout << topla1(8.9, 2) << endl; // 11.9
	cout << topla1(3.7, 4.8) << endl; // 8.15
	cout << topla1("Merhaba ", "Dunya") << endl << endl; // Merhaba Dunya

	cout << topla2<int, int, int>(3, 4) << endl; // 7
	cout << topla2<int, double, double>(5, 6.1) << endl; // 11.1
	cout << topla2<double, int, double>(8.9, 2) << endl; // 11.9
	cout << topla2<double, double, double>(3.7, 4.8) << endl; // 8.15
	cout << topla2<string, string, string>("Merhaba ", "Dunya") << endl; // Merhaba Dunya

	return 0;
}