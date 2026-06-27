#include <iostream>

using namespace std;

struct BankAccount {

private:

	double balance;

public:

	// constructor
	BankAccount(double _balance = 0) {

		balance = _balance;

		cout << "Hesap olusturuldu.\n";
	}

	// destructor
	~BankAccount() {

		cout << "Hesap kapatildi.\n";
	}

	// getter
	double getBalance() {

		return balance;
	}

	// setter benzeri para ekleme metodu
	void deposit(double amount) {

		balance += amount;
	}

	// para cekme
	void withdraw(double amount) {

		balance -= amount;
	}
};

int main() {

	BankAccount myAccount(1000);

	cout << "Baslangictaki bakiye: " << myAccount.getBalance() << endl;

	myAccount.deposit(500);

	cout << "Para yattiktan sonraki bakiye: " << myAccount.getBalance() << endl;

	myAccount.withdraw(400);

	cout << "Para cekildikten sonraki guncel bakiye: " << myAccount.getBalance() << endl;

	return 0;
}