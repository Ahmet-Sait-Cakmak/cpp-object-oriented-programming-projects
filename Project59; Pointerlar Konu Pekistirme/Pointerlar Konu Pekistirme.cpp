#include <iostream>

using namespace std;

int ucaginYonbilgileriniHesapla(int x_) {
	// Cok fazla sayida matematiksel hesaplama satirlari icerdigini varsayalim ...
	x_ = 34;

    return x_;
}

void ucaginYonbilgileriniHesapla(int *p) {
	// Cok fazla sayida matematiksel hesaplama satirlari icerdigini varsayalim ...
	*p = 45;
}

int main() {
	
	int x = 30, y = 40;

	x = ucaginYonbilgileriniHesapla(x);

	cout << "x degiskeni icin yeni yon bilgisi: " << x << endl << endl;

	ucaginYonbilgileriniHesapla(&y);

	cout << "y degiskeni icin yeni yon bilgisi: " << y << endl << endl;

	return 0;
}

