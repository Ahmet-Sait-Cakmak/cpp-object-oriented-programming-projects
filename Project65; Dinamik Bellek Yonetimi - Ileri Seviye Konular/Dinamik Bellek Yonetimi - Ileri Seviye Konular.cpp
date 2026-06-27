/* Bir dizinin boyutu run - time sirasinda belirlendiginde, dinamik bellek yonetimi kullani_
lir. Dinamik bellek yonetimi, programin calismasi sirasinda bellegi dinamik olarak ayirmak 
ve serbest birakmak icin kullanilan bir tekniktir. C++'da dinamik bellek yonetimi için "new"
ve "delete" operatorleri kullanilir. */

// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "Lutfen dizinin boyutunu girin: ";
	cin >> n;
	cout << endl;
	
	// Dinamik olarak bir dizi oluþturma
	int* dizi = new int[n];
	
	// Diziyi doldurma
	for (int i = 0; i < n; i++) {
		cout << "Lutfen dizinin " << (i + 1) << ". elemanini giriniz: ";
		cin >> dizi[i];
	}
	cout << endl;
	
	// Diziyi ekrana yazdýrma
	for (int i = 0; i < n; i++) {
		cout << "Dizinin " << (i + 1) << ". elemani= ";
		cout << dizi[i] << endl;
	}
	cout << endl << endl;
    
	// Dizinin elemanlari toplamini hesaplama
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += dizi[i];
	}
	cout << "Dizinin elemanlari toplami= " << sum << endl;

	// Dinamik olarak ayrýlan belleði serbest býrakma
	delete[] dizi;
	return 0;
}