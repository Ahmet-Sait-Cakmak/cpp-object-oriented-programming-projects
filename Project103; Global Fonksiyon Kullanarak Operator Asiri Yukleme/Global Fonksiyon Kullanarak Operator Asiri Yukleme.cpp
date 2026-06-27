// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include <iostream>

using namespace std;

class Complex {

private:

	double real, imag;

public:

	Complex(double _real = 0, double _imag = 0) : real(_real), imag(_imag) {}

	// << operatorunu asiri yukleme => Ornek kullanim: cout << c1
	friend ostream &operator<<(ostream &_cout, const Complex &_c1) {

		if (_c1.imag < 0)
			_cout << _c1.real << " - " << abs(_c1.imag) << "i";
		else
			_cout << _c1.real << " + " << _c1.imag << "i";

		return _cout;
	}
};

int main() {

	Complex c1(3, -5);

	cout << c1 << " complex sayisi << operatorunun asiri yuklenmesi sayesinde yazdirildi."
		<< endl;

	return 0;
}

	

		