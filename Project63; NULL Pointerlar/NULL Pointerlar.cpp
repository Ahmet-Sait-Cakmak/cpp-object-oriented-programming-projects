// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include <iostream>

using namespace std;

int main() {

	int* ptr;
	ptr = NULL; /* NULL pointer, herhangi bir bellek adresini göstermeyen bir pointer türü_
	dür. */

	if (ptr != NULL) {
		*ptr = 5;
	}
	else {
		ptr = new int(7);
	}

	cout << "pointerin gosterdigi deger: " << *ptr << endl;

	return 0;
}