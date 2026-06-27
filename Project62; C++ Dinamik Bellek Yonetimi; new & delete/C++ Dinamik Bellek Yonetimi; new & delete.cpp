// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include <iostream>

using namespace std;

int main() {

	int* ptr = new int; /* Dinamik olarak bir tamsayý için bellek ayýrdýk ve o bellegin ad_
	resini ptr'ye atadýk. */

	*ptr = 5; /* ptr'nin gösterdiði adrese 5 deðerini atadýk. */

	cout << "ptr'nin gosterdigi adresteki deger: " << *ptr << endl << endl;

	delete ptr; /* Dinamik olarak ayýrdýðýmýz belleði serbest býrakýyoruz. */

	ptr = NULL; /* Belleði serbest býraktýktan sonra ptr'yi NULL yaparak dangling pointer du
	rumunu önlüyoruz. */

	if (ptr != NULL)
		cout << *ptr;

	ptr = new int;
	*ptr = 10;

	cout << "ptr'nin gosterdiði adresteki deger: " << *ptr << endl;

	delete ptr;

	return 0;
}