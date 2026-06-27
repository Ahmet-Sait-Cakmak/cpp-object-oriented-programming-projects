// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include <iostream>

using namespace std;

class Otomobil {

public:
	
	string renk;
};

int main() {
	Otomobil otomobil1, otomobil2, otomobil3;

	otomobil1.renk = "siyah";
	otomobil2.renk = "mavi";
	otomobil3.renk = "sari";

	cout << "Otomobil 1'in rengi: " << otomobil1.renk << endl;
	cout << "Otomobil 2'nin rengi: " << otomobil2.renk << endl;
	cout << "Otomobil 3'un rengi: " << otomobil3.renk << endl;

	return 0;
}