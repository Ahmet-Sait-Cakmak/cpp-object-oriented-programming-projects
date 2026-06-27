/*
Programlama Sinav - Mulakat Sorusu

Asagidaki programin ciktisi nedir?

#include <iostream>

using namespace std;

int main() {

int a[5], *p, z;

for (int i = 0; i < 5; i++) 
	a[i] = i * i;

p = a;
z = *(p + 1) + *(a + 2);
cout << z;

return 0;
}
*/	

#include <iostream>

using namespace std;

int main() {

	cout << "Yukaridaki kodun ciktisi 5'tir." << endl;

	return 0;
}