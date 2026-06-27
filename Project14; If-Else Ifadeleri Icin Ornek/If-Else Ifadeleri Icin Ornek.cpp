#include <iostream>

using namespace std;

int main() {

	int sifre = 1234;
	int kullaniciGirdisi;
	cout << "Lutfen sifrenizi giriniz: ";
	cin >> kullaniciGirdisi;

	if (kullaniciGirdisi == sifre) /* Bir degiskenin degerinin baska bir degiskenin degeri_
	ne esit olup olmadigini (==) operatoru ile kontrol ederiz. */
	{
		cout << "Girdiginiz sifre dogru. Sisteme hos geldiniz!" << endl;
	}
	else {
		cout << "Girdiginiz sifre yanlis." << endl;
	}
	
	return 0;
}