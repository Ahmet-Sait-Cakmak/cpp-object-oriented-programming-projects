#include <iostream>

using namespace std;

struct BankAccount {

private:

	double balance;

public:

	// constructor
	BankAccount(double _Balance = 0) {

		balance = _Balance;

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

	BankAccount* pMyAccount = new BankAccount(1000);

	cout << "Baslangictaki bakiye: " << pMyAccount->getBalance() << endl;

	pMyAccount->deposit(500);

	cout << "Para yattiktan sonraki bakiye: " << pMyAccount->getBalance() << endl;

	pMyAccount->withdraw(400);

	cout << "Para cekildikten sonraki guncel bakiye: " << pMyAccount->getBalance() << endl;

	delete pMyAccount; /* Delete komutunun isleme alinmasi sonucu destructor otomatik olarak
	cagrilir. */

	return 0;
}