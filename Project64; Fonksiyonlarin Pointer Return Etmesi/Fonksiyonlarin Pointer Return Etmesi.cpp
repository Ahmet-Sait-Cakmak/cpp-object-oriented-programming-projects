// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include <iostream>

using namespace std;

int* fonksiyon() {
	int* p = new int;
	*p = 37;
	p = NULL;
	return p;
}

int main() {
	int* ptr;
	ptr = fonksiyon();
	
	if (ptr != NULL) {
		cout << *ptr << endl << endl;
	}

	return 0;
}

