/*
Asagidaki kodun calisma mantigi udemy'deki C++ Dersleri : Sıfırdan Uzmanlığa Nesne Tabanlı Prog_
ramlama kursunun "Bolum 38: C++ ve OOP Kapsamli Uygulama" kısmında anlatilmaktadir.
*/

#include"Ogrenci.h"

void menuyuGoster() {

	cout << "\n\n---- OGRENCI BILGI SISTEMI ----\n\n"
		 << "1: Ogrenci Ekle\n"
		 << "2: Tum Ogrencileri Listele\n"
		 << "3: Ogrenci Sil\n"
		 << "4: Ogrenci Ara\n"
		 << "5: Cikis\n\n";
}


void ogrenciEkle(list<Ogrenci>* pLst) {

	int ID;
	string ad;
	float sinavNotu;

	cout << "\nEkleyeceginiz yeni ogrenci icin ID giriniz: ";

	cin >> ID;
	cin.ignore(); // getline() metodunun üzerindeki ilk metod cin metodu ise cin metodunun hemen altinda cin.ignore() kullanmak gerekir. Aksi takdirde getline() metodu, cin metodundan kalan enter tusunu okuyarak devam eder ve kullanicidan kitap adi ve yazar bilgisi girmesini istemeden islemi tamamlar.

	cout << "Ekleyeceginiz yeni ogrenci icin isim giriniz: ";

	getline(cin, ad);

	cout << "Ekleyeceginiz yeni ogrenci icin sinav notu giriniz: ";

	cin >> sinavNotu;

	Ogrenci ogr(ID, ad, sinavNotu); 
	                                       
	pLst->push_back(ogr);            

	cout << "\nOgrenci sisteme basariyla eklendi.\n";
}

void tumOgrencileriListele(list<Ogrenci>* pLst) {

	if (pLst->empty()) {
		cout << "\nOgrenci bilgi sistemi su an bos durumda! Bundan dolayi su an herhangi bir listeleme islemi gerceklestirilemez.\n";
		return;
	}

	cout << "\n\n---- Ogrenci Listesi ----\n\n";
	for (auto& ogr : *pLst) {
		ogr.bilgileriGoster();
	}

	/*
	Yukaridaki for döngüsünün alternatifi:

	for (auto it = pLst->begin(); it != pLst->end(); it++) {
		it->bilgileriGoster();
	}
	*/
}


void ogrenciSil(list<Ogrenci>* pLst) {

	if (pLst->empty()) {
		cout << "\nOgrenci bilgi sistemi su an bos durumda! Bundan dolayi su an herhangi bir silme islemi gerceklestirilemez.\n";
		return;
	}

	int ID;

	cout << "\nSilmek istediginiz ogrencinin ID'sini giriniz: ";

	cin >> ID;

	for (list<Ogrenci>::iterator it = pLst->begin(); it != pLst->end(); it++) { // == for (auto it = pLst->begin(); it != pLst->end(); it++) {

		if (it->getID() == ID) {

			pLst->erase(it);

			cout << "\nOgrenci basariyla silindi.\n";

			return;
		}
	}

	cout << "\nGirdiginiz ID numarasi ile eslesen bir ogrenci bulunamadi.\n";
}


void ogrenciAra(list<Ogrenci>* pLst) {

	if (pLst->empty()) {
		cout << "\nOgrenci bilgi sistemi su an bos durumda! Bundan dolayi su an herhangi bir arama islemi gerceklestirilemez.\n";
		return;
	}

	int ID;

	cout << "\nAramak istediginiz ogrencinin ID'sini giriniz: ";

	cin >> ID;

	for (Ogrenci& ogr : *pLst) {

		if (ogr.getID() == ID) {

			cout << "\nAradiginiz ogrenci sistemde bulundu:\n";

			ogr.bilgileriGoster();

			return;
		}
	}

	cout << "\nGirdiginiz ID numarasi ile eslesen bir ogrenci bulunamadi.\n";
}

/*

* Yukarikai void ogrenciAra(list<Ogrenci>* pLst) metodunun alternatif bir versiyonu:

void ogrenciAra(list<Ogrenci>* pLst) {

	if (pLst->empty()) {
		cout << "\nOgrenci bilgi sistemi su an bos durumda! Bundan dolayi herhangi bir arama islemi gerceklestirilemiyor.\n";
		return;
	}

	int ID;

	cout << "\nGoruntulemek istediginiz ogrencinin ID'sini giriniz: ";

	cin >> ID;

	for (list<Ogrenci>::iterator it = pLst->begin(); it != pLst->end(); it++) { // == for (auto it = pLst->begin(); it != pLst->end(); it++) {

		if (it->getID() == ID) {

		    cout << "\nAradiginiz ogrenci sistemde bulundu:\n";

			it->bilgileriGoster();

			return;
		}
	}

	cout << "\nGirdiginiz ID numarasi ile eslesen bir ogrenci bulunamadi.\n";
}

*/

int main() {

	list<Ogrenci>* pOgrenciList = new list<Ogrenci>();

	int secim;

	do {

		menuyuGoster();

		cout << "Yapmak istediginiz islem icin 1, 2, 3, 4 veya 5'i giriniz: ";

		cin >> secim;

		if (secim == 1) {
			ogrenciEkle(pOgrenciList);
		}


		else if (secim == 2) {
			tumOgrencileriListele(pOgrenciList);
		}


		else if (secim == 3) {
			ogrenciSil(pOgrenciList);
		}


		else if (secim == 4) {
			ogrenciAra(pOgrenciList);
		}


		else if (secim == 5) {
			cout << "\nProgramdan cikiliyor...\n";
		}

		else {
			cout << "\nYanlis bir numara girdiniz!\n";
		}

	} while (secim != 5);

	delete pOgrenciList;

	return 0;
}
