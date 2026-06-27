#include "Otomobil.h"

/* Otomobil classina ait bir degiskenin tum uyelerine atama yapmak icin asagidaki
Otomobil::Otomobil(string _renk, string _model, int _beygirGucu, int _modelYili) construc_
tor metodu gibi bir metod kullaniriz. */
Otomobil::Otomobil(string _model, string _renk, int _beygirGucu, int _modelYili) {

	model = _model;
	renk = _renk;
	beygirGucu = _beygirGucu;
	modelYili = _modelYili;
}

/* Otomobil classina ait bir degiskenin tum uyelerini ekrana yazdirmak istedigimiz zaman a_
sagidaki void Otomobil::ruhsatBilgileriGoster() metodu gibi bir metod kullaniriz. */
void Otomobil::ruhsatBilgileriGoster() {

	cout << "Model: " << model << endl;
	cout << "Renk: " << renk << endl;
	cout << "Beygir Gucu: " << beygirGucu << endl;
	cout << "Model Yili: " << modelYili << endl;
}


/* Otomobil classina ait bir degiskenin sadece model uyesinin aldigi degeri degistirmek is_
tedigimiz zaman asagidaki void Otomobil::setOtomobilModel(string _model) fonksiyonu gibi bir
fonksiyon kullanmak zorundayiz, aksi halde Otomobil classina ait bir degiskenin model uyesi_
ni main dosyasinin icinden direkt degistirmenin baska bir yolu yoktur. Cunku Otomobil
classina ait model uyesi Otomobil classi icinde private olaral tanimlanmistir. */
void Otomobil::setOtomobilModel(string _model) {
	model = _model;
}

/* Otomobil classina ait bir degiskenin sadece model uyesinin aldigi degeri ekrana yazdir_
mak istedigimiz zaman asagidaki string Otomobil::getOtomobilModel() fonksiyonu gibi bir fon_
ksiyon kullanmak zorundayiz, aksi halde Otomobil classina ait bir degiskenin sadece model uye_
sini main dosyasinin icinden direkt olarak ekrana yazdirmanin baska bir yolu yoktur. Cunku
Otomobil classina ait model uyesi Otomobil classi icinde private olaral tanimlanmistir. */
string Otomobil::getOtomobilModel() {
	return model;
}

/* Otomobil classina ait bir degiskenin sadece renk uyesinin aldigi degeri degistirmek iste_
digimiz zaman asagidaki void Otomobil::setOtomobilRenk(string _renk) fonksiyonu gibi bir
fonksiyon kullanmak zorundayiz, aksi halde Otomobil classina ait bir degiskenin sadece renk
uyesini main dosyasinin icinden direkt degistirmenin baska bir yolu yoktur. Cunku Otomobil
classina ait renk uyesi Otomobil classi icinde private olaral tanimlanmistir. */
void Otomobil::setOtomobilRenk(string _renk) {
	renk = _renk;
}

/* Otomobil classina ait bir degiskenin sadece renk uyesinin aldigi degeri ekrana yazdirmak
istedigimiz zaman asagidaki string Otomobil::getOtomobilRenk() fonksiyonu gibi bir fonksiyon
kullanmak zorundayiz, aksi halde Otomobil classina ait bir degiskenin sadece renk uyesini main
dosyasinin icinden direkt olarak ekrana yazdirmanin baska bir yolu yoktur. Cunku Otomobil clas_
ina ait renk uyesi Otomobil classi icinde private olaral tanimlanmistir. */
string Otomobil::getOtomobilRenk() {
	return renk;
}

/* Otomobil classina ait bir degiskenin sadece beygirGucu uyesinin aldigi degeri degistir_
mek istedigimiz zaman asagidaki void Otomobil::setOtomobilBeygirGucu(int _beygirGucu) fonksi_
yonu gibi bir fonksiyon kullanmak zorundayiz, aksi halde Otomobil classina ait bir degiskenin
sadece beygirGucu uyesini main dosyasinin icinden direkt degistirmenin baska bir yolu yoktur.
Cunku Otomobil classina ait beygirGucu uyesi Otomobil classi icinde private olaral tanimlanmis_
tir. */
void Otomobil::setOtomobilBeygirGucu(int _beygirGucu) {
	beygirGucu = _beygirGucu;
}

/* Otomobil classina ait bir degiskenin sadece beygirGucu uyesinin aldigi degeri ekrana yaz_
dirmak istedigimiz zaman asagidaki int Otomobil::getOtomobilBeygirGucu() fonksiyonu gibi bir
fonksiyon kullanmak zorundayiz, aksi halde Otomobil classina ait bir degiskenin sadece
beygirGucu uyesini main dosyasinin icinden direkt olarak ekrana yazdirmanin baska bir yolu yok_
tur. Cunku Otomobil classina ait beygirGucu uyesi Otomobil classi icinde private olarak tanim_
lanmistir.*/
int Otomobil::getOtomobilBeygirGucu() {
	return beygirGucu;
}