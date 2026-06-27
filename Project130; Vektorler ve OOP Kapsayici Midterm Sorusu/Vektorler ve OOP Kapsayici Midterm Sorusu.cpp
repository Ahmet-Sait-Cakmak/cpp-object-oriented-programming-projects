/* 
Asagidaki kodu anlamak istiyorsan udemy'deki C++ Dersleri : Sıfırdan Uzmanlığa Nesne Tabanlı P_
rogramlama kursunun "Bolum 4: C++ Ile Algoritmaya Giris" konu basligi altinda bulunan Switch
Case isimli videoyu izlemeni tavsiye ederim. Ayrica asagidaki kodun calisma mantigi yine ayni 
kursun "Bolum 35: Vektorler ve OOP Kapsayici Midterm Sorusu ve Cozumu" kısmında anlatilmaktadir.
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Personel {

private:

	int personelNo;
	string name;
	string kadro;

public:

	Personel(int _personelNo, string _isim, string _kadro) {
		
		personelNo = _personelNo;
		name = _isim;
		kadro = _kadro;
	}

	void print() const {

		cout << "Personel No: " << personelNo
			<< ", Name: " << name
			<< ", Kadro: " << kadro << endl << endl;
	}

	int getPersonelNo() const {
		
		return personelNo;
	}

	string getName() const {
		
		return name;
	}

	string getKadro() const {
		
		return kadro;
	}
};

void personelEkle(vector<Personel>& perVec) {

	int personelNo;
	string name, kadro;

	cout << "\nEkleyeceğiniz yeni personel icin numara giriniz: ";

	cin >> personelNo;
	cin.ignore(); // getline() metodunun üzerindeki ilk metod cin metodu ise cin metodunun hemen altinda cin.ignore() kullanmak gerekir. Aksi takdirde getline() metodu cin metodundan kalan enter tusunu okuyarak devam eder ve kullanicidan kitap adi ve yazar bilgisi girmesini istemeden islemi tamamlar.

	cout << "Ekleyeceginiz yeni personel icin isim giriniz: ";

	getline(cin, name);
	
	cout << "Ekleyeceginiz yeni personel icin pozisyon giriniz: ";

	getline(cin, kadro);

	Personel newPersonel(personelNo, name, kadro);

	perVec.push_back(newPersonel); // Veya perVec.push_back(Personel(personelNo, name, kadro)) veya perVec.emplace_back(personelNo, name, kadro);

	cout << "\nPersonel basariyla eklendi.\n\n";
}

void personelleriListele(const vector<Personel> &perVec) {

	if (perVec.empty()) {
		cout << "\nPersonel listesi su an bos durumda! Bundan dolayi listeleme islemi gerceklestirilemez.\n\n";
		return;
	}

	cout << "\n\n---- Personel Listesi----\n\n";

	for (const Personel &per : perVec) {
		per.print();
	}
}

void personelAra(const vector<Personel> &perVec) {

	if (perVec.empty()) {
		cout << "\nPersonel listesi su an bos durumda! Bundan dolayi herhangi bir arama islemi gerceklestirilemez.\n\n";
		return;
	}

	int perNo;

	cout << "\nAramak istediginiz personelin numarasini giriniz: ";

	cin >> perNo;

	for (const Personel &per : perVec) {

		if (per.getPersonelNo() == perNo) {

			cout << "\nAradiginiz personel sistemde bulundu:\n\n";

			per.print();

			return;
		}
	}

	cout << "\nGirdiginiz personel numarasi ile eslesen bir personel bulunamadi.\n\n";
}


void personelSil(vector<Personel> &perVec) {

	if (perVec.empty()) {
		cout << "\nPersonel listesi su an bos durumda! Bundan dolayi herhangi bir silme islemi gerceklestirilemez.\n\n";
		return;
	}


	int perNo, counter = 0;

	cout << "\nSilmek istediginiz personelin numarasini giriniz: ";

	cin >> perNo;

	for (const Personel &per : perVec) {

		if (per.getPersonelNo() == perNo) {

			perVec.erase(perVec.begin() + counter);

			cout << "\nPersonel basariyla silindi.\n\n";

			return;
		}
		counter++;
	}
	if (counter == perVec.size())
		cout << "\nGirdiginiz personel numarasi ile eslesen bir personel bulunamadi.\n\n";
}


/*

*Yukarikai metodun alternatif bir versiyonu:

	void personelSil(vector<Personel> &perVec) {

		if (perVec.empty()) {
			cout << "\nPersonel listesi su an bos durumda! Bundan dolayi herhangi bir silme islemi gerceklestirilemez.\n\n";
			return;
		}

		int perNo;

		cout << "\nSilmek istediginiz personelin numarasini giriniz: ";

		cin >> perNo;

		vector<Personel>::iterator it;

		for (it = perVec.begin(); it != perVec.end(); it++) {

			if (it->getPersonelNo() == perNo) {

				perVec.erase(it);

				cout << "Personel basariyla silindi.\n";

				return;
			}
		}

		cout << "\nGirdiginiz personel numarasi ile eslesen bir personel bulunamadi.\n";
	}

	*/

	/*

	*Yukarikai metodun baska bir alternatif versiyonu:

		void personelSil(vector<Personel> &perVec) {

			if (perVec.empty()) {
				cout << "\nPersonel listesi su an bos durumda! Bundan dolayi herhangi bir silme islemi gerceklestirilemez.\n\n";
				return;
			}

			int perNo;

			cout << "\nSilmek istediginiz personelin numarasini giriniz: ";

			cin >> perNo;


			for (auto it = perVec.begin(); it != perVec.end(); it++) {

				if (it->getPersonelNo() == perNo) {

					perVec.erase(it);

					cout << "Personel basariyla silindi.\n";

					return;
				}
			}

			cout << "\nGirdiginiz personel numarasi ile eslesen bir personel bulunamadi.\n";
		}

		*/


int main() {

	vector<Personel> personelVector;

	int secim;

	do {
		
		cout << "\n1: Personel Ekle\n"
			 << "2: Personelleri Listele\n"
			 << "3: Personel Ara\n"
			 << "4: Personel Sil\n"
			 << "5: Cikis\n\n"
			 << "Yapmak istediginiz islem icin 1, 2, 3, 4 veya 5'i giriniz: ";

		cin >> secim;

		switch (secim) {

		case 1:
			personelEkle(personelVector);
			break;


		case 2:
			personelleriListele(personelVector);
			break;


		case 3:
			personelAra(personelVector);
			break;


		case 4:
			personelSil(personelVector);
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