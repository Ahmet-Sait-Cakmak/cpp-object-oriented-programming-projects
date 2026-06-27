#include <iostream>

using namespace std;

/*

Tek boyutlu bir tam sayi dizisinin icinde 2'ye tam bolunebilen sayilarin karesini hesaplayip
bu sayilarin yerine yazan (yani diziyi guncelleyen) bir fonksiyon yaziniz. Ayrica dizinin son
halini ekrana yazdiriniz.

Orn:

dizi = { 2, 7, 12} ise fonksiyonun cagrisi sonrasinda diz = { 4, 7, 144} olur ve ekrana 
"4 7 144" yazdirilir.

*/

void diziyiDegistir(int arr[], int boyut) {

	for (int i = 0; i < boyut; i++) {
		if (arr[i] % 2 == 0) {
			arr[i] = arr[i] * arr[i];
		}
	}
}


int main() {

	int dizi[] = { 2, 7, 12 };

	int dizinin_eleman_sayisi, dizinin_tuttugu_toplam_byte, tek_bir_elemanin_tuttugu_byte;
	
	dizinin_tuttugu_toplam_byte = sizeof(dizi);

	tek_bir_elemanin_tuttugu_byte = sizeof(dizi[0]);

	dizinin_eleman_sayisi = dizinin_tuttugu_toplam_byte / tek_bir_elemanin_tuttugu_byte;


	cout << "Dizinin ilk hali: ";

	for (int i = 0; i < dizinin_eleman_sayisi; i++) {
		cout << dizi[i] << ", ";
	}
	cout << endl << endl;


	diziyiDegistir(dizi, dizinin_eleman_sayisi);


	cout << "Dizinin son hali: ";

	for (int i = 0; i < dizinin_eleman_sayisi; i++) {
		cout << dizi[i] << ", ";
	}

	cout << endl;

	return 0;
}