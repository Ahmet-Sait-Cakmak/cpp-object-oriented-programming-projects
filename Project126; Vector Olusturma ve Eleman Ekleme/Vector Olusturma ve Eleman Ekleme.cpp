// Vectors

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
		cout << "vNumbers[" << i << "] : " << vNumbers[i] << endl;
	}


	vNumbers[1] = 50;

	cout << endl << "vNumbers[1] : " << vNumbers[1] << endl << endl;


	for (size_t i = 0; i < vNumbers.size(); i++) {
		cout << "vNumbers[" << i << "] : " << vNumbers[i] << endl; // vNumbers[i] == vNumbers.at(i) 
	}

	cout << endl;

	vector<string> vCars = { "Opel", "Audi", "BMW"};

	for (size_t i = 0; i < vCars.size(); i++) {
		cout << "vCars[" << i << "] : " << vCars[i] << endl; // vCars[i] == vCars.at(i)
	}

	cout << endl;

	vCars.push_back("Mercedes");


	for (size_t i = 0; i < vCars.size(); i++) {
		cout << "vCars[" << i << "] : " << vCars[i] << endl; // vCars[i] == vCars.at(i)
	}

	vCars[3] = "Seat";

	cout << endl << "vCars[3] : " << vCars[3] << endl << endl;

	for (const string& car : vCars) {
		cout << car << endl;
	}

	return 0;
}