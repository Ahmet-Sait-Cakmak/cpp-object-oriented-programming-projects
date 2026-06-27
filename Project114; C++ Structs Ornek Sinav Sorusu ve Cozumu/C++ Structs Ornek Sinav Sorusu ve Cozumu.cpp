/*

C++ KOD INCELEME VE YORUMLAMA SORUSU

Asagidaki kodu inceleyiniz ve sorulari cevaplayiniz.

1) Derlenebilirlik: Asagidaki kodu derlediginizde herhangi bir derleme hatasi alir misiniz?
Nedeniyle aciklayiniz.

2) Asagidaki yorum satiri, yorum satiri olmaktan cikarilip calistirilirsa kod ne tur bir hata
verir? (compile-time veya run-time) Neden?

// person1.age = 25;

3) Program eger hatasiz calistirilabiliyorsa ekrana ne yazar?

4) Asagidaki kodda "struct" kelimesi yerine "class" yazilmis olsaydi cikti degisir miydi?

*/

#include <iostream>

#include <string>

using namespace std;

struct Person {
private:
	string name;
	int age;

public:
	// Yapici fonksiyon (constructor)
	Person(string n, int a) {
		name = n;
		age = a;
	}

	// Bildirimleri ekrana yazdiran metot
	void introduce() const {
		cout << "Ad: " << name << " , Yas: " << age << endl;
	}

	// Yas bilgisini guncelleyen metot
	void setAge(int newAge) {

		if (newAge >= 0) {
			age = newAge;
		}
	}
};

int main() {
	Person person1("Ali", 20);
	person1.introduce();

	// Dikkat: age alanina dogrudan erismek istersek...
	// person1.age = 25; // Bu satirda ne olur? Neden?

	person1.setAge(25);
	person1.introduce();

	return 0;
}