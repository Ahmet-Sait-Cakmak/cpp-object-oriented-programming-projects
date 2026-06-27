// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include <iostream>
#include <string>

using namespace std;

struct Ogrenci {
    int ogrenciNo;
    string isim;
};

void bilgileriYazdir(Ogrenci* ogr) {
    cout << "Ogrenci No: " << ogr->ogrenciNo << ", Isim: " << ogr->isim << endl;
}

int main() {
    // Dinamik bellekten iki öğrenci oluşturuluyor
    Ogrenci* pogrenci1 = new Ogrenci;
    Ogrenci* pogrenci2 = new Ogrenci;

    // Değer atamaları
    pogrenci1->ogrenciNo = 101;
    pogrenci1->isim = "Ahmet";
   
    delete pogrenci2;

    pogrenci2 = pogrenci1;

    pogrenci2->ogrenciNo = 102;
    pogrenci2->isim = "Mehmet";

    bilgileriYazdir(pogrenci1);
    bilgileriYazdir(pogrenci2);

    // Bellek temizleme
    delete pogrenci1;

    return 0;
}