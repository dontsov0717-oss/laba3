#include <windows.h>
#include <iostream>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    string sur1, sur2;
    cin >> sur1 >> sur2;
    cout << ((size(sur1) > size(sur2)) ? "true" : "false") << endl;

    return 0;
}
