/*
Kodlama Sorusu:

- Kullanicidan 4 tam sayi alin ve bu tam sayilari kullanicinin girdigi siranýn tam tersi o_
lacak sekilde ekrana yazdirin. Mesela; kullanici 1, 2, 3, 4 girdiginde ekrana 4, 3, 2, 1 
yazdirilmali.
*/

#include <iostream>

using namespace std;

void terstenSirala(int arr[], int size) {
	for (int i = size - 1; i >= 0; i--) {
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}

int main() {
	const int size = 4;
	int numbers[size];

	cout << "Lutfen sirayla" << size << " tane tam sayi giriniz:" << endl;

	for (int i = 0; i < size; i++) {
		cin >> numbers[i];
	}

	cout << endl;

	for (int i = 0; i < size; i++) {
		cout << "Girdiginiz " << (i + 1) << ". sayi: " << numbers[i] << endl;
	}

	cout << "\n\nSayilarin ters siralamasi:" << endl << endl;

	terstenSirala(numbers, size);

}