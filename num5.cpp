#include <windows.h>
#include <iostream>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    string city;
    cin >> city;
    if (size(city) % 2 == 0) {
        cout << "Четное" << endl;
    }
    else {
        cout << "Нечет" << endl;
    }
    return 0;

}
