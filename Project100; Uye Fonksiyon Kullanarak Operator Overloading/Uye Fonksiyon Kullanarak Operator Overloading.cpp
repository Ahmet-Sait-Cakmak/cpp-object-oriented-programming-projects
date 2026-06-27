/* Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle. Ve chatgpt'deki
https://chatgpt.com/share/69c2b7c2-a0fc-8003-b2c5-f865c7a66540 linkine mutlaka bak. Bu linkte
global fonksiyon kullanarak operator overload ederken fonksiyonun girdi olarak neden opera_
torun kendisini degilde adresini aldığını ve fonksiyonun donus degeri olarak neden adres don_
durdugunu acikliyor. */

#include <iostream>

using namespace std;

class Complex {

private:

	double real, imag;

public:

	Complex(double _real = 0, double _imag = 0) {

		real = _real;
		imag = _imag;	
	}

	// + operatorunu asiri yukleme
	// c1 + c2 == c1.operator+(c2)

	Complex operator+(const Complex &_c2) { // == Complex operator+(Complex _c2) {
		Complex c3;
		c3.real = real + _c2.real; /* Buradaki real, c1'in (yani + operatorunun solunda kalan
		Complex sinifina ait degiskenin) real'idir. */
		c3.imag = imag + _c2.imag; /* Buradaki imag, c1'in (yani + operatorunun solunda kalan
		Complex sinifina ait degiskenin) real'idir. */

		return c3;
	}

	void display() {

		cout << real << " + " << imag << "i" << endl;
	}
};

int main() {

	Complex c1(1.5, 2.5);
	Complex c2(3.5, 4.5);

	Complex c3 = c1 + c2; // c1.operator+(c2)

	c3.display();

	return 0;
}