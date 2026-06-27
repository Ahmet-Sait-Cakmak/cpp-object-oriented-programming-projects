/*
Asagidaki adimlari izleyen bir C++ programi yaziniz:

1. Kullanicidan 3x2 boyutunda iki tane matris icin eleman girmesini isteyeceksiniz:
- Yani 3 satir ve 2 sütundan olusan bir matrisin tum elemanlarini kullaniciya soracak ve 
gireceginiz degerleri bir dizi yapisina kaydedeceksiniz.
- Ardindan ayni boyutlardaki ikinci matrisin (3x2) elemanlarini yine kullanicidan alacak_
siniz.

2. Bu iki matrisin (dizinin) toplamini (eleman bazinda) hesaplayacaksiniz.

3. Sonuc olarak elde edeceginiz 3x2 boyutundaki toplam dizinin elemanlarini ekrana yazdira_
caksiniz.
*/

#include <iostream>

using namespace std;

int main() {
	const int rows = 3;
	const int cols = 2;

	int arr1[rows][cols];
	int arr2[rows][cols];

	cout << "Lutfen arr1 matrisin elemanlarini giriniz.\n\n";

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << "arr1[" << i << "][" << j << "] elemanini giriniz: ";
			cin >> arr1[i][j];
		}
	}

	cout << "\n\nLutfen arr2 matrisin elemanlarini giriniz.\n\n";

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << "arr2[" << i << "][" << j << "] elemanini giriniz: ";
			cin >> arr2[i][j];
		}
	}

	int sum[rows][cols];
	cout << endl << endl << "sum[" << rows << "][" << cols << "]:" << endl << endl;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			sum[i][j] = arr1[i][j] + arr2[i][j];
			cout << sum[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}