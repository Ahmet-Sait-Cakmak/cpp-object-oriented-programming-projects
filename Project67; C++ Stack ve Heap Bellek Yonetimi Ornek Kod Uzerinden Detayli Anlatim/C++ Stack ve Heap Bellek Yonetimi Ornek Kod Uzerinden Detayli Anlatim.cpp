// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include <iostream>

using namespace std;

int main() {

    int x, y;
    int z = 10;

    int* p = new int(5);
    delete p;

    int w = 20;
	p = &w;
    cout << *p << endl;

    return 0; 
}