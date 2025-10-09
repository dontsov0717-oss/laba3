#include <windows.h>
#include <iostream>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int *arr = new int[20]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int save=0;
    for (int i=0; i < 3; i++) {
        save = arr[i];
        arr[i] = arr[17+i];
        arr[17+i] = save;
    }
    for (int i=0; i <= 19; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
