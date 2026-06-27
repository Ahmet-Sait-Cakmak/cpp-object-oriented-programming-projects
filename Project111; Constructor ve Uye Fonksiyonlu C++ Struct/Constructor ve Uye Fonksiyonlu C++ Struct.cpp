#include <iostream>

using namespace std;

struct Person {
	/* struct yapisinin icindeki uye degiskenler varsayilan olarak public etiketiyle tanimla_
	nir. */

	string name;

	int age;

	// parametreli contructor
	Person(const string& _name, int _age) {

		name = _name;
		age = _age;
	}

	// uye fonksiyon
	void printInfo() {

		cout << "Ad: " << name << ", Yas: " << age << endl;
	}
};

int main() {

	/* struct yaspisinin icindeki uye degiskenlere ve fonksiyonlara varsayilan olarak public
	etiketiyle tanimlanmis olmalarindan dolayi direkt olarak erisilebilir. */

	Person p1("Ali", 25);

	p1.printInfo();

	return 0;
}