#include<iostream>

#include<list>

using namespace std;

void printList(list<int> l){

	list<int>::iterator itr;

	for (itr = l.begin(); itr != l.end(); itr++) {
		cout << *itr << " ";
	}

	cout << endl << endl;
}

int main() {

	list<int> lst;

	lst.push_back(5); // listenin en arkasina (sonuna) 5 ekler

	printList(lst);

	lst.push_back(8); // listenin en arkasina (sonuna) 8 ekler

	printList(lst);

	lst.push_front(3); // listenin en onune (basina) 3 ekler

    printList(lst);

	return 0;
}