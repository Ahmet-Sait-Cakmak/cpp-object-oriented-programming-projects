// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

/*

uniform_int_distribution ve uniform_real_distribution siniflarini kullanarak random sayi uret_
me:

- rand() metodu ile uretilen sayilarin dagilimi uniform (duzgun) degildir. Yani mesela bazen 
2'ler cok cikarken 5 hic cikmaz.
- uniform_int_distribution ve uniform_real_distribution siniflari  istatiksel olarak esit ola_
silikli (duzgun) dagilim yaparlar.
- Buyuk projelerde (oyunlar, simulasyonlar, yapay zeka vb.) mutlaka uniform_int_distribution 
ve/veya uniform_real_distribution siniflari kullanilir.

*/

#include <iostream>

#include <random>

using namespace std;

int main() {

	random_device rd; // Gercek rastgelelilik kaynagi nesnesi (donanimdan alinir)
	mt19937 motor(rd()); // Rastgele sayi uretme motoru (Mersenne Twister algoritmasi)



	uniform_int_distribution<short> duzgunShortdagilim(-30, 500); /* -30 ile 500 arasindan e_
	sit olasilikla rastgele tam sayi uretir. Typaname kismina short yazildigi icin urettiri_
	lecek olan tam sayinin araligi [-32768, 32767] araliginin icinden secilmelidir. */

	short rastgeleShort = duzgunShortdagilim(motor); /* Duzgun dagilimi(motoru) kullanarak 
	rastgele short sayi uretme. */

	cout << "rastgeleShort: " << rastgeleShort << endl << endl;



	uniform_int_distribution<int> duzgunIntdagilim(-275, 60000); /* -275 ile 600000 arasindan
	esit olasilikla rastgele tam sayi uretir. Typaname kismina int yazildigi icin urettirile_
	cek olan tam sayinin araligi [-2147483648, 2147483647] araliginin icinden secilmelidir. */

	int rastgeleInt = duzgunIntdagilim(motor); /* Duzgun dagilimi(motoru) kullanarak
	rastgele int sayi uretme. */

	cout << "rastgeleInt: " << rastgeleInt << endl << endl;



	uniform_real_distribution<float> duzgunFloatdagilim(-1.0, 1.0); /* -1.0 ile 1.0 arasindan 
	esit olasilikla rastgele ondalikli sayi uretir. Typaname kismina float yazildigi icin u_
	rettirilecek olan ondalikli sayinin araligi [-3.40 x 10^38, 3.40 x 10^38] araliginin icin_
	den secilmelidir. */

	float rastgeleFloat = duzgunFloatdagilim(motor); /* Duzgun dagilimi(motoru) kullanarak
	rastgele int sayi uretme. */

	cout << "rastgeleFloat: " << rastgeleFloat << endl << endl;



	uniform_real_distribution<double> duzgunDoubledagilim(-0.1, 0.1 ); /* -0.1 ile 0.1 a_
	rasindan esit olasilikla rastgele ondalikli sayi uretir. Typaname kismina double yazildi_
	gi icin urettirilecek olan ondalikli sayinin araligi [-1.79 x 10^308, 1.79 x 10^308] ara_
	liginin icinden secilmelidir. */

	double rastgeleDouble = duzgunDoubledagilim(motor); /* Duzgun dagilimi(motoru) kullanarak
	rastgele double sayi uretme. */

	cout << "rastgeleDouble: " << rastgeleDouble << endl << endl;


}