#include <iostream>

using namespace std;

int main() {
/*
Konsol output ekraninda Turkce karakterler goruntulenmek isteniyorsa setlocate(LC_ALL, "Turkish)
fonksiyonu int main() fonksiyonunun hemen altina yazilmali.
*/

setlocale(LC_ALL, "Turkish");

cout << "Türkçe karakterler: Ç, ç, ð, ý, Ý, Ö, ö, Þ, þ, Ü, ü" << endl;
	
	return 0;
}