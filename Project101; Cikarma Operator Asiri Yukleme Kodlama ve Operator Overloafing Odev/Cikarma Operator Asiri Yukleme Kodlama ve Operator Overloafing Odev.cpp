#include <iostream>

using namespace std;

class Complex {

private:

	double real, imag;

public:

	Complex(double _real = 0, double _imag = 0) : real(_real), imag(_imag) {};

	// - operatorunu asiri yukleme
	// c1 - c2 == c1.operator-(c2)
	Complex operator-(const Complex &c2) { // == Complex operator-(Complex c2) {
		Complex c3;
		c3.real = real - c2.real; /* Buradaki real, c1'in (yani - operatorunun solunda kalan
		Complex sinifina ait degiskenin) real'idir. */
		c3.imag = imag - c2.imag; /* Buradaki imag, c1'in (yani - operatorunun solunda kalan
		Complex sinifina ait degiskenin) imag'idir. */

		return c3;
	}

	void yazdir() {
		if (imag < 0)
			cout << real << " - " << abs(imag) << "i" << endl;
		else
			cout << real << " + " << imag << "i" << endl;
	}
};

int main() {

	Complex c1(1.5, 2.5);
	Complex c2(3.5, 4.5);

	Complex c3 = c1 - c2; // c1.operator-(c2)

	c3.yazdir();

	return 0;
}