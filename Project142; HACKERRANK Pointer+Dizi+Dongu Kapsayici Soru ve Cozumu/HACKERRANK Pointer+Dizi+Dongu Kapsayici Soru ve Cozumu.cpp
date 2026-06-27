#include <iostream>

using namespace std;

/*

Kodlama Sorusu:

Kullanicidan N tane tam sayi alin ve bu tamsayilari kullanicinin girdigi siranin tam tersi o_
larak ekrana yazin. Mesela:

-Kullanici once kac tam sayi girecegini girsin (mesela 5 girmis olsun).
-Daha sonra belirttigi adet kadar tam sayi girsin (mesela 9, 2, 1, 7, 4 girmis olsun).
-Programci bu sayilari giris sirasinin tersi sekilde araya bosluk birakarak ekrana yazdirsin
(mesela kullanici ekrana 4, 7, 1, 2, 9 yazdirmis olsun). 

*/

int main() {

	int tamSayiAdedi;

	cout << "Lutfen girmek istediginiz tam sayi adedini giriniz: ";

	cin >> tamSayiAdedi;

	cout << endl;

	int* pDizi = new int[tamSayiAdedi];
	
	for (int i = 0; i < tamSayiAdedi; i++) {
		cout << "Lutfen " << i + 1 << ". tam sayiyi giriniz: ";
		cin >> pDizi[i];
	}

	cout << "\nGirdiginiz sayilarin giris siraniza gore soldan saga dogru dizilimi: ";

	for (int i = 0; i < tamSayiAdedi; i++) {
		cout << pDizi[i] << ", ";
	}

	cout << "\n\nGirdiginiz sayilarin giris siraniza gore tersten yazimi: ";
	for (int i = tamSayiAdedi - 1; i >= 0; i--) {
		cout << pDizi[i] << ", ";
	}

	cout << endl;

	delete[] pDizi;

	return 0;
}