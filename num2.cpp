#include <windows.h>
#include <iostream>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int size = 10;
    float *arr = new float[size]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //Задание I
    /*float sum=0;
    for (int i=0; i < 10; i++) {
        sum += arr[i];
    }
    cout << sum << endl;*/


    //Задание II
    /*float s_sqr = 0;
    for (int i=0; i < 10; i++) {
        s_sqr += (arr[i] * arr[i]);
    }
    cout << s_sqr << endl;*/

    //Задание III
    /*float sum6 = 0;
    for (int i=0; i < 6; i++) {
        sum6 += arr[i];
    }
    cout << sum6 << endl;*/

    //Задание IV
    /*int k1, k2;
    float sumkk=0;
    cin >> k1 >> k2;
    k1--;
    k2--;
    while (k1 <= k2) {
        sumkk += arr[k1];
        k1++;
    }
    cout << sumkk << endl;*/

    //Задание V
    /*float sr_ar=0, sumar;
    for (int i=0; i < 10; i++) {
        sumar += arr[i];
    }
    sr_ar = sumar / size;
    cout << sr_ar << endl;*/

    //Задание VI
    /*int s1, s2;
    float sumss=0;
    cin >> s1 >> s2;
    float count = s2 - s1 + 1;
    s1--;
    s2--;
    while (s1 <= s2) {
        sumss += arr[s1];
        s1++;
    }
    cout << (sumss / count) << endl;*/

    return 0;
}
