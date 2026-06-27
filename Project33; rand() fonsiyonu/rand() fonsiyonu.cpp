#include <iostream>
#include <cstdlib> // rand() ve srand() fonksiyonlari cstdlib kutuphanesinde bulunur
#include <ctime>   // time() fonksiyonu ctime kutuphanesinde bulunur

using namespace std;

int main() {
/*
time(0) : 1970 yilinin 1 Ocak gununun baslangicindan su ana kadarki gecen saniye sayisini 
dondurur.
*/
cout << "Su anki zaman (saniye cinsinden): " << time(0) << endl << endl;
srand(time(0)); // Rastgele sayi ureticisini su anki zamanla baslat

// 1. Ornek: Rastgele bir sayi uretme

int rastgeleSayi1 = rand();

cout << "Uretilen rastgele sayi: " << rastgeleSayi1 << endl << endl;


// 2. Ornek: 1 ile 10 arasinda rastgele bir sayi uretme

int rasgeleSayi2 = (rand() % 10) + 1; // 0-9 arasinda sayi uretir, +1 ile 1-10 arasina cevirir

cout << "1 ile 10 arasinda rastgele sayi: " << rasgeleSayi2 << endl;

return 0;
}

// Bu konuyu anlamak veya tekrar etmek icin udmy'den bu konunun videosunu izle.
