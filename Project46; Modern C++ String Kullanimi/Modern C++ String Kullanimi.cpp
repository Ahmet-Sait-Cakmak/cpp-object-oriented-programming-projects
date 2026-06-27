// Modern C++ : std::string Kullanimi

#include <iostream>
#include <string>

using namespace std;

int main() {

	string meyve = "elma";

	// .length() metoduyla bir stringin uzunlugunu yazdirma
	cout << "meyve isimli stringin uzunlugu: " << meyve.length() << endl << endl;
	
	
	// .at(n) metoduyla bir stringin n. indisindeki karakterin ne oldugunu yazdirma 
	cout << "meyve isimli stringin ilk harfi: " << meyve.at(0) << endl << endl; 


	// bir stringe append(string) metodu ile baska bir string ekleme
    meyve.append(" suyu");
	cout << "meyve isimli stringin yeni hali: " << meyve << endl << endl;


	// bir stringe (+) operatoru ile baska bir string ekleme
	string yeni = meyve + " guzeldir.";
	cout << "(+) operatoru ile olusturulnus 'yeni' stringi: " << yeni << endl << endl;


	/* .substr(a, b) metoduyla bir stringin a.indisinden itibaren sirasiyla b kadar karak_
	terini kaydedip geriye kalan karakterlerini de silme yoluyla yeni bir string olusturma */
	cout << "yeni isimli dizinin bir parcasi: " << yeni.substr(0, 4) << endl << endl;
	string parca = yeni.substr(5, 4);
	cout << parca << endl << endl;
	cout << yeni << endl << endl;


	/* .find() metoduyla bir stringin icinde eger varsa baska bir stringin hangi indisten 
	itibaren var oldugunu hesaplama */
	size_t pos = yeni.find("güzel");
	if (pos != string::npos) {
		cout << "Aranan parca bulundu. Aranan parca, stringin icinde " << pos
			<< ". indekten itibaren mevcut.\n\n";
	}
	else cout << "Aranan parca stringin icinde bulunamadi.\n\n";


	/* .erase(a, b) metoduyla bir stringin a. indisinden itibaren sirayla b kadar karakte_
	rini silip geriye kalan karakterlerini de kaydederek yeni bir string olusturma. */
	yeni.erase(5, 5);
	cout << "Erase sonrasi: " << yeni << endl << endl;


	/* .insert(a, string) metoduyla bir stringe o stringin a. indisinden itibaren yeni bir
	string eklemek */
	yeni.insert(4, " TAZEYKEN");
	cout << "Insert sonrasi: " << yeni << endl << endl;


	/* .replace(a, b, string) metoduyla bir stringin a. indisinden itibaren sirasiyla b ka_
	dar karakterlik kismini baska bir string ile degistirme */
	yeni.replace(0, 4, "portakal");
	cout << "Replace sonrasi: " << yeni << endl << endl;

	
	return 0;
}