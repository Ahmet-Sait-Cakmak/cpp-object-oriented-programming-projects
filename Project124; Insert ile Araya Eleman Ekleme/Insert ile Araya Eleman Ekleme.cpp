// Bu konuyu anlamak istiyorsan mutlaka bu konunun videosunu udemy'den izle.

#include<iostream>

#include<list>

using namespace std;

void printList(list<int> l) {

	list<int>::iterator itr;

	for (itr = l.begin(); itr != l.end(); itr++) {
		cout << *itr << " ";
	}

	cout << endl << endl;
}

int main() {

	list<int> lst;

	lst.push_back(5); // listenin en arkasina (sonuna) 5 ekler

	printList(lst); // 5

	lst.push_back(8); // listenin en arkasina (sonuna) 8 ekler

	printList(lst); // 5 8

	lst.push_front(3); // listenin en onune (basina) 3 ekler

	printList(lst); // 3 5 8

	lst.pop_front(); // listenin en onundeki (basindaki) elemani siler

	printList(lst); // 5 8

	lst.pop_back(); // listenin en arkasindaki (sonundaki) elemani siler

	printList(lst); // 5

	lst.push_front(3); 

	printList(lst); // 3 5

	lst.push_back(8); // 3 5 8

	printList(lst);

	list<int>::iterator it;

	it = lst.begin(); // iteratoru listenin basina yerlestirir

	it++;

	it++;

	lst.insert(it, 9); // iteratorun gosterdiği konuma 9 ekler

	printList(lst); // 3 5 9 8

	it = lst.begin();

	it++;

	lst.insert(it, 2, 7); // iteratorun gosterdiği konuma 2 tane 7 ekler; 

	printList(lst); // 3 7 7 5 9 8

	return 0;
}