#include <iostream>
using namespace std;

int main() {
    int size=10, ind= -1;
    int *arr = new int[size]{-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};

    //Задание I
    for (int i=0; i < size; i++) {
        if (arr[i] < 0) {
            ind = i;
            break;
        }
    }
    if (ind != -1) {
        for (int i=ind; i < size; i++) {
            arr[i] = arr[i+1];
        }
        for (int i=0; i < (size-1); i++) {
            cout << arr[i] << endl;
        }
    }
    else {
        for (int i=0; i < size; i++) {
            cout << arr[i] << endl;
        }
    }


    //Задание II
    /*for (int i=size-1; i != 0; i--) {
        if (arr[i] % 2 == 0) {
            ind = i;
            break;
        }
    }
    if (ind != -1) {
        for (int i =ind; i < (size-1); i++) {
            arr[i] = arr[i+1];
        }
        for (int i=0; i < (size-1); i++) {
            cout << arr[i] << endl;
        }
    }
    else {
        for (int i=0; i < size; i++) {
            cout << arr[i] << endl;
        }
    }*/

    return 0;
}
