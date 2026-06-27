/*
Asagidaki kodu anlamak istiyorsan udemy'deki C++ Dersleri : Sıfırdan Uzmanlığa Nesne Tabanlı P_
rogramlama kursunun "Bolum 4: C++ Ile Algoritmaya Giris" konu basligi altinda bulunan Switch 
Case" isimli videoyu izlemeni tavsiye ederim. Ayrica asagidaki kodun calisma mantigi yine ayni
kursun "Bolum 37: Map ve OOP Kapsayici Midterm Sorusu ve Cozumu" kısmında anlatilmaktadir.
*/

#include<iostream>
#include<string>
#include<map>

using namespace std;

class Kitap {

private:

	string ad;

	string yazar;

	int rafNo;

public:

	Kitap(string _ad = "", string _yazar = "", int _rafNo = 0) : ad(_ad), yazar(_yazar), rafNo(_rafNo) {}

	string getAd() const { return ad; }

	string getYazar() const { return yazar; }

	int getRafNo() const { return rafNo; }
};


void kitapEkle(map<int, Kitap>& mKtp) {

	int ID, rafNo;
	string ad, yazar;

	cout << "\nEkleyeceginiz yeni kitap icin ID giriniz: ";

	cin >> ID;
	cin.ignore(); // getline() metodunun üzerindeki ilk metod cin metodu ise cin metodunun hemen altinda cin.ignore() kullanmak gerekir. Aksi takdirde getline() metodu, cin metodundan kalan enter tusunu okuyarak devam eder ve kullanicidan kitap adi ve yazar bilgisi girmesini istemeden islemi tamamlar.

	cout << "Ekleyeceginiz yeni kitap icin isim giriniz: ";

	getline(cin, ad);

	cout << "Ekleyeceginiz yeni kitap icin yazar giriniz: ";

	getline(cin, yazar);

	cout << "Ekleyeceginiz yeni kitap icin raf numarasi giriniz: ";

	cin >> rafNo;

	Kitap newKitap(ad, yazar, rafNo); //  
	                                  //   mKtp[ID] = Kitap(ad, yazar, rafNo);
	mKtp.insert({ ID, newKitap });    //

	cout << "\nKitap basariyla eklendi.\n\n";
}

void kitapBilgileriniGoruntule(const map<int, Kitap>& mKtp) {

	if (mKtp.empty()) {
		cout << "\nKutuphane su an bos durumda! Bundan dolayi herhangi bir goruntuleme islemi gerceklestirilemez.\n\n";
		return;
	}

	int ID;

	cout << "\nGoruntulemek istediginiz kitabın ID'sini giriniz: ";

	cin >> ID;

	map<int, Kitap>::const_iterator it = mKtp.find(ID); // == auto it = mKtp.find(ID);

	if (it != mKtp.end()) {

		cout << "\nAradiginiz kitap kutuphanede bulundu:\n\n";

		const Kitap& k = it->second;

		cout << "Kitabin ID'si: " << ID << ", Kitabın Adi: " << k.getAd()
			<< ", Kitabin Yazari: " << k.getYazar() << ", Kitabin Raf Numarasi: "
			<< k.getRafNo() << endl;
	}
	else {
		cout << "\nGirdiginiz kitap ID'si ile eslesen bir kitap bulunamadi.\n\n";
	}
}

/*

* Yukarikai void kitapBilgileriniGoruntule(const map<int, Kitap>& mKtp) metodunun alternatif 
bir versiyonu:

void kitapBilgileriniGoruntule(const map<int, Kitap>& mKtp) {

	if (mKtp.empty()) {
		cout << "\nKutuphane su an bos durumda! Bundan dolayi herhangi bir goruntuleme islemi gerceklestirilemez.\n\n";
		return;
	}

	int ID;

	cout << "\nGoruntulemek istediginiz kitabın ID'sini giriniz: ";

	cin >> ID;

	for (const auto& ktp : mKtp) {

		if (ktp.first == ID) {

			cout << "\nAradiginiz personel sistemde bulundu:\n\n";

			cout << "Kitabin ID'si: " << ktp.first << ", Kitabın Adi: " << ktp.second.getAd()
				<< ", Kitabin Yazari: " << ktp.second.getYazar() << ", Kitabin Raf Numarasi: "
				<< ktp.second.getRafNo() << endl;

			return;
		}
	}

	cout << "\nGirdiginiz kitap ID'si ile eslesen bir kitap bulunamadi.\n\n";
}

*/

void kitapSil(map<int, Kitap>& mKtp) {

	if (mKtp.empty()) {
		cout << "\nKutuphane su an bos durumda! Bundan dolayi herhangi bir silme islemi gerceklestirilemez.\n\n";
		return;
	}

	int ID;

	cout << "\nSilmek istediginiz kitabin ID'sini giriniz: ";

	cin >> ID;

	if (mKtp.erase(ID)) {

		cout << "\nKitap basariyla silindi.\n\n";

		return;
	}
	else {
		cout << "\nGirdiginiz kitap ID'si ile eslesen bir kitap bulunamadi.\n\n";
	}
}

/*

* Yukarikai metodun alternatif bir versiyonu:

void kitapSil(map<int, Kitap> mKtp) {

	if (mKtp.empty()) {
		cout << "\nKutuphane su an bos durumda! Bundan dolayi herhangi bir silme islemi gerceklestirilemez.\n\n";
		return;
	}

	int ID;

	cout << "\nSilmek istediginiz kitabın ID'sini giriniz: ";

	cin >> ID;

	auto it = mKtp.find(ID);

	if (it != mKtp.end()) {

		mKtp.erase(ID); // veya mKtp.erase(it) veya mKtp.erase(it->first)

		cout << "\nKitap basariyla silindi.\n\n";

		return;
	}
	else {
		cout << "\nGirdiginiz personel numarasi ile eslesen bir personel bulunamadi.\n\n";
	}
}

*/

void kitaplariListele(const map<int, Kitap>& mKtp) {

	if (mKtp.empty()) {
		cout << "\nKutuphane su an bos durumda! Bundan dolayi listeleme islemi gerceklestirilemez.\n\n";
		return;
	}

	cout << "\n\n---- Kutuphanedeki Kitaplar----\n\n";

	for (const auto& ktp : mKtp) {
		cout << "Kitabin ID'si: " << ktp.first << ", Kitabin Adi: " << ktp.second.getAd()
			<< ", Kitabin Yazari: " << ktp.second.getYazar() << ", Kitabin Raf Numarasi: "
			<< ktp.second.getRafNo() << endl;
	}
	/*
	Yukaridaki for döngüsünün alternatifi:

	for (auto it = mKtp.begin(); it != mKtp.end(); it++) {
		cout << "Kitabin ID'si: " << it->first << ", Kitabın Adi: " << it->second.getAd()
			<< ", Kitabin Yazari: " << it->second.getYazar() << ", Kitabin Raf Numarasi: "
			<< it->second.getRafNo() << endl;
	}
	*/
}


int main() {

	map<int, Kitap> mKutuphane;

	int secim;


	do {

		cout << "\n---- KUTUPHANE YONETIM SISTEMI ----\n\n"
			 << "1: Kitap Ekle\n"
			 << "2: Kitap Bilgilerini Goruntule\n"
			 << "3: Kitap Sil\n"
			 << "4: Tum Kitaplari Listele\n"
			 << "5: Cikis\n\n"
			 << "Yapmak istediginiz islem icin 1, 2, 3, 4 veya 5'i giriniz: ";


		cin >> secim;


		switch (secim) {

		case 1:
			kitapEkle(mKutuphane);
			break;


		case 2:
			kitapBilgileriniGoruntule(mKutuphane);
			break;


		case 3:
			kitapSil(mKutuphane);
			break;


		case 4:
			kitaplariListele(mKutuphane);
			break;

		case 5:
			cout << "\nProgramdan cikiliyor...\n";
			break;


		default:
			cout << "\nYanlis bir numara girdiniz! Lutfen 1, 2, 3, 4 veya 5'i giriniz.\n";
		}

	} while (secim != 5);


	return 0;
}
