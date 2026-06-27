#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int sonuc1, taban, us;
	cout << "Taban icin bir deger giriniz: ";
	cin >> taban;
	cout << "us icin bir deger giriniz: ";
	cin >> us;

	sonuc1 = pow(taban, us);
	cout << "\nSonuc: " << sonuc1 << endl;


	int sonuc2, sonuc3, sonuc4, sonuc5;
	
	sonuc2 = floor(2.9);
	sonuc3 = ceil(2.1);
	sonuc4 = round(6.499);
	sonuc5 = round(6.501);
	
	
	cout << "Sonuc2: " << sonuc2 << endl;
	cout << "Sonuc3: " << sonuc3 << endl;
	cout << "Sonuc4: " << sonuc4 << endl;
	cout << "Sonuc5: " << sonuc5 << endl;


}