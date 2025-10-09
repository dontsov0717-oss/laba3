#include <iostream>
#include <string>
using namespace std;

int main(){
    string word, cut_word;
    int m, n;
    cin >> word;
    cin >> m;
    cin >> n;
    for (m; m <= n; m++) {
        cut_word += word[m - 1];
    }
    cout << cut_word;
    return 0;
}