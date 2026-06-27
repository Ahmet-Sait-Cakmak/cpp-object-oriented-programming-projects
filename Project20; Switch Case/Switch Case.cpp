#include <iostream>

using namespace std;

int main() {

	int day;
	cout << "Enter a day number (1 for monday, 2 for tuesday, 3 for wednesday, ";
	cout << "4 for thursday, 5 for friday, 6 for saturday, 7 for sunday): ";
	cin >> day;

	switch (day) {

	case 1:
		cout << "\nmonday\n";
		break;

	case 2:
		cout << "\ntuesday\n";
		break;

	case 3:
		cout << "\nwednesday\n";
		break;
	case 4:
		cout << "\nthursday\n";
		break;
	case 5:
		cout << "\nfriday\n";
		break;
	case 6:
		cout << "\nsaturday\n";
		break;
	case 7:
		cout << "\nsunday\n";
		break;

	default:
		cout << "\nYou entered an invalid day number\n";
		break;
	}

	return 0;
}