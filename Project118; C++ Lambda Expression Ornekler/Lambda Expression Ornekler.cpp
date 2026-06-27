// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include <iostream>

using namespace std;

void ekranaYaz() {

	auto karisikLambda = [](bool kosul) -> double {

		if (kosul) {
			return 3;
		}
		else {
			return 4.9;
		}
	};

	cout << karisikLambda(true) << endl;
}

int main() {

	ekranaYaz();

	return 0;
}