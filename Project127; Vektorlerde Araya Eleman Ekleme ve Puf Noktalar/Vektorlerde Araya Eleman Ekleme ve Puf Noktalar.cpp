// Bu dersi tekrar etmek istedigin zaman bu dersin videosunu udemy'den mutlaka izle.

#include<iostream>
#include<vector>

using namespace std;

int main() {

	vector<int> vNumbers;

	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30); 

	cout << "Vector boyutu: " << vNumbers.size() << endl << endl;

	for (size_t i = 0; i < vNumbers.size(); i++) {
		cout << "vNumbers[" << i << "] : " << vNumbers[i] << endl; // vNumbers[i] == vNumbers.at(i)
	}

	cout << endl;


	vNumbers.insert(vNumbers.begin() + 1, 15); // 1. pozisyona 15 ekle (2. elemani 15 yap)

	for (size_t i = 0; i < vNumbers.size(); i++) {
		cout << "vNumbers[" << i << "] : " << vNumbers[i] << endl; // vNumbers[i] == vNumbers.at(i)
	}

	cout << endl;

	for (int num : vNumbers) {
		num = num + 1;
	}


	for (size_t i = 0; i < vNumbers.size(); i++) {
		cout << "vNumbers[" << i << "] : " << vNumbers[i] << endl; // vNumbers[i] == vNumbers.at(i)
	}

	cout << endl;

	for (int& num : vNumbers) {
		num = num + 1;
	}


	for (size_t i = 0; i < vNumbers.size(); i++) {
		cout << "vNumbers[" << i << "] : " << vNumbers[i] << endl; // vNumbers[i] == vNumbers.at(i)
	}

	cout << endl;

	for (const int& num : vNumbers) {
		cout << num << endl;
		//num = num + 1;
	}

	return 0;
}