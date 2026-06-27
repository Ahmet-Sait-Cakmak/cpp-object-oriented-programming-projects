/* 
Asagidaki program calistirildiginda ekranda ne yazar ?

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "programlari";

    s.insert(0, "C++ ");
    s.erase(11, 3);
    s.append(" yazmak cok zevkli!");
    s.replace(12, 7, " kodlamak");

    cout << s << endl;
    cout << s.substr(0, 10) << endl;
    cout << "Uzunluk: " << s.length() << endl;
    cout << "bir karakter: " << s.at(s.length() - 1) << endl;

    return 0;
}
*/


#include <iostream>
#include <string>

using namespace std;

int main() {
cout << "C++ programi kodlamak cok zevkli!" << endl << endl;
cout << "C++ progra" << endl << endl;
cout << "Uzunluk: 33" << endl << endl;
cout << "bir karakter: !" << endl << endl;

return 0;
}