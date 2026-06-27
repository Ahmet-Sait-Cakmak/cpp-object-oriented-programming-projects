// C Tipi String

#include <iostream>

using namespace std;

int main() {
	// char veri tipindeki bir dizinin uzunlugunu hesaplama
	char mesaj[] = "Merhaba"; /* Derleyici otomatik bir sekilde char veri tipindeki mesaj i_
	simli diziye son karakter olarak '\0' karakterini ekler. */

	int uzunluk = 0;
	while (mesaj[uzunluk] != '\0') { 
		uzunluk++; 
	}

	cout << "Mesaj dizisinin uzunlugu: " << mesaj << endl << endl;

	// char veri tipindeki dizinin elemanlarini ekrana yazdirma

	for (int i = 0; i < uzunluk; i++) {
		cout << "mesaj[" << i << "] = " << mesaj[i] << endl;
	}


	// char veri tipindeki diziyi string veri tipine donusturme

	string yeniMesaj = string(mesaj);
	yeniMesaj.append(" C++");
	cout << "\nYeni mesaj: " << yeniMesaj << endl;

	return 0;
}