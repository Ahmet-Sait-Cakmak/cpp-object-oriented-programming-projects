// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include <iostream>

using namespace std;

int main() {

	auto karisikLambda1 = [](bool kosul) {

		if (kosul) {
			return 3.7;
		}
		else {
			return 4.9;
		}
	};

	auto sayi1 = karisikLambda1(true);
	cout << "sayi1: " << sayi1 << endl;
	auto sayi2 = karisikLambda1(false);
	cout << "sayi2: " << sayi2 << endl << endl;



	auto karisikLambda2 = [](bool kosul) -> int {

		if (kosul) {
			return 3;
		}
		else {
			return 4.9;
		}
	};

	auto sayi3 = karisikLambda2(true);
	cout << "sayi3: " << sayi3 << endl;
	auto sayi4 = karisikLambda2(false);
	cout << "sayi4: " << sayi4 << endl << endl;



	auto karisikLambda3 = [](bool kosul) -> double {

		if (kosul) {
			return 3;
		}
		else {
			return 4.9;
		}
	};

	auto sayi5 = karisikLambda3(true);
	cout << "sayi5: " << sayi5 << endl;
	auto sayi6 = karisikLambda3(false);
	cout << "sayi6: " << sayi6 << endl << endl;



	auto karisikLambda4 = [](bool kosul) -> int {

		if (kosul) {
			return 3;
		}
		else {
			return 4;
		}
		};

	auto sayi7 = karisikLambda4(true);
	cout << "sayi7: " << sayi7 << endl;
	auto sayi8 = karisikLambda4(false);
	cout << "sayi8: " << sayi8 << endl << endl;

	return 0;
}