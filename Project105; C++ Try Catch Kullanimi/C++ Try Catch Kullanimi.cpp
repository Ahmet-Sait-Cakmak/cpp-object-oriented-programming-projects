// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include <iostream>

using namespace std;

int main() {

	try {

		int yas;

		cout << "Lutfen yasinizi giriniz: ";

		cin >> yas;

		if (yas >= 18)
			cout << "\nErisim yetkiniz var, yasiniz yeterince buyuk.";
		else
			throw (yas);
	}
	catch (int hataKodu) {

		cout << "\nYasiniz " << hataKodu << " oldugundan dolayi erisiminiz engellendi."
			<< " Erisim yetkisine sahip olmak icin en az 18 yasinda olmalisiniz.";
	}

	cout << "\n\nbye....\n";

	return 0;
}