#include <windows.h>
#include <iostream>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    float *arr = new float[5]{2, 3, 4, 5, 6};

    //Задание I
    /*for (int i=0; i < 5; i++) {
        arr[i] = arr[i]*2;
    }

    for (int i=0; i < 5; i++) {
        cout << arr[i] << endl;
    }*/

    //Задание II
    /*int a;
    cin >> a;

    for (int i=0; i < 5; i++) {
        arr[i] = arr[i] - a;
    }

    for (int i=0; i < 5; i++) {
        cout << arr[i] << endl;
    }*/

    //Задание III
    /*float one = arr[0];
    for (int i=0; i < 5; i++) {
        arr[i] = arr[i] / one;
    }
    for (int i=0; i < 5; i++) {
        cout << arr[i] << endl;
    }*/

    return 0;
}
