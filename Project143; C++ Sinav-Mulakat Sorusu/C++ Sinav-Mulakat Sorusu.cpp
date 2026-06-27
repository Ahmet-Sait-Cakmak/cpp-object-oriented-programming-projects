/*

Sizden C++ Nesne Yonelimli Programlama (OOP) bilgilerinizi kullanarak bankacilik islemleri
icin bir Class/Sinif yazmaniz istemiyor. Sinifinizda tutulacak veriler:

-Hesap sahibinin adi
-Hesap numarasi
-Bakiye

Yazacaginiz sinifin asagidaki islemleri yapabilmesi isteniyor:

-Hesaplarin ilk deger olarak bakiyesinin 0 atanmasi gerekir.
-Hesaba para yatirilabilir
-Hesaptan para cekilebilir
-Hesap detay bilgisi goruntulensin. (ad, hesap no ve bakiyesi)

Sinifinizi yazdiktan sonra main icerisinde bu sinifi kullanarak asagidaki kisiler icin bir he_
sap olusturun:

Ad: Ali Kayahan
Hesap no: 172123
Bakiye: 250.75

Ad: Berna Ozan
Hesap no: 174153
Bakiye 0


Hesaplari olusturduktan sonra su iki islemi yapin:

1) Ali Kayahan hesabinin bir nesnesini olusturup 200TL para yatirma islemi yapin. Daha sonra 
100TL para cekme islemi yapin. Ondan sonra da hesap detay bilgilerini goruntuleyin.

2) Berna Ozan'in hesabindan 100TL cekmeye calisin. Sonra Berna Ozan'in hesap detay bilgilerini
ekrana yazdirin.

*/

#include "Hesap.h"

int main() {

	Hesap hesap1("Ali Kayahan", 172123, 250.75);
	Hesap hesap2("Berna Ozan", 174153, 0);

	hesap1.hesap_bilgilerini_goruntule();
	hesap1.hesaba_para_yatir(200);

	try {
		hesap1.hesaptan_para_cek(100);
	}
	catch (const std::exception& e) {
		cout << e.what() << endl;
	}

	hesap1.hesap_bilgilerini_goruntule();


	hesap2.hesap_bilgilerini_goruntule();

	try {
		hesap2.hesaptan_para_cek(100);
	}
	catch (const std::exception& e) {
		cout << e.what() << endl;
	}

	hesap2.hesap_bilgilerini_goruntule();

	cout << endl;

	return 0;
}