#include<iostream>
#include<vector>

using namespace std;

int main() {

	vector<int> vNumbers;

	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);

	cout << "Vector boyutu: " << vNumbers.size() << endl << endl;

	for (size_t i = 0; i < vNumbers.size(); i++) {
		cout << "vNumbers[" << i << "] : " << vNumbers[i] << endl; // vNumbers[i] == vNumbers.at(i) 
	}

	cout << endl;


	vNumbers.pop_back(); // Vektorun en arkasindaki elemani (son elemani) siler.

	for (size_t i = 0; i < vNumbers.size(); i++) {
		cout << "vNumbers[" << i << "] : " << vNumbers[i] << endl; // vNumbers[i] == vNumbers.at(i) 
	}

	cout << endl;


	// Belirli bir indexteki elemani silme
	vNumbers.erase(vNumbers.begin() + 2); /* vNumbers vektorunun 2. indexindeki elemanini (3.
	elemanini siler. */

	for (const int& num : vNumbers) {
		cout << num << endl;
	}

	cout << endl;


	// Bir vectorun tum elemanlarini silme
	vNumbers.clear(); // vNumbers vektorunun tum elemanlarini siler.

	cout << "Vector boyutu: " << vNumbers.size() << endl << endl;

	for (const int& num : vNumbers) {
		cout << num << endl;
	}

	cout << endl;

	// Bir vectoru baslangic degeriyle olsturma
	vector<int>myVector(5, -1); // 5 elemanli ve butun elemanlari -1 olan bir vector olusturur.

	for (const int& num : myVector) {
		cout << num << endl;
	}

	return 0;
}