// Bu konuyu ablamak veya tekrar etmek icin bu konunun videosunu udemy'dan izle.

#include <iostream>

using namespace std;

int main() {
	
	int arr[] = { 8, 12, 20 };

	int *ptr;
	ptr = arr; // (ptr = arr) == (ptr = &arr[0]) 

	cout << "arr dizisinin ilk elemaninin adresi: " << ptr << endl;
	cout << "arr dizisinin ilk elemaninin adresi: " << arr << endl;
	cout << "arr dizisinin ilk elemaninin adresi: " << &arr[0] << endl << endl << endl;


	cout << "arr dizisinin ikinci elemani: " << *(ptr + 1) << endl;
	cout << "arr dizisinin ikinci elemani: " << ptr[1] << endl;
	cout << "arr dizisinin ikinci elemani: " << arr[1] << endl << endl << endl;

	
	// arr dizisinin 2. indeksini pointer kullanarak 2 katina cikarma:
	
	cout << "arr dizisinin 2. indeksi: " << *(ptr + 2) << endl;
	*(ptr + 2) *= 2; 
	cout << "arr dizisinin yeni 2. indeksi: " << *(ptr + 2) << endl;

	return 0;
}