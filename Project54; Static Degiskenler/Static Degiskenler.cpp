/*
STATIC DEGISKENLER

- Bir degisken static olarak tanimlandiginda, programin omru boyunca (lifetime) ona yer ay_
rilir. Fonksiyon birden fazla kez cagrilsa bile, static degisken için yer yalnizca bir kez
ayrilir ve onceki cagridaki degiskenin degeri bir sonraki islev cagrisina tasinir.
*/

// Bu konuyu tekrar etmek veya anlamak icin bu konunun videosunu udemy'den mutlaka izle.

#include <iostream>

using namespace std;

void fonksiyon1() {
	int sayac = 0;
	sayac++;
	cout << "fonksiyon1'in cagrilma adedi: " << sayac << endl;
}

void fonksiyon2() {
	static int sayac = 0;
	sayac++;
	cout << "fonksiyon2'in cagrilma adedi: " << sayac << endl;
}

int main() {

	fonksiyon1();
	fonksiyon1();
	fonksiyon1();
	fonksiyon1();
	
	cout << endl << endl;

	fonksiyon2();
	fonksiyon2();
	fonksiyon2();
	fonksiyon2();

	cout << endl << endl;

	return 0;
}