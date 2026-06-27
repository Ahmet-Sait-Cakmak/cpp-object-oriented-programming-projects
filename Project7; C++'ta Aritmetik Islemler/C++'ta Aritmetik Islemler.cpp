#include <iostream>

using namespace std;

int main() {

	int quizNote1 = 72;
	int quizNote2 = 51;
	float quizNote3 = 72.0f;
	int quizNote4 = 51;

	float ilk_iki_quizOrtalama = (float)(quizNote1 + quizNote2) / 2;
	float son_iki_quizOrtalama = (quizNote3 + quizNote4) / 2;

	cout << "Ilk iki quiz notunun ortalamasi: " << ilk_iki_quizOrtalama << endl;
	cout << "Son iki quiz notunun ortalamasi: " << son_iki_quizOrtalama << endl << endl;

	int x = 12;
	int y = 10;
	int z = x % y; // Modulus operatoru (%) x'in y'ye bolumunden kalani verir

	cout << z << endl;

	return 0;
}