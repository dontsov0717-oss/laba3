#include <iostream>
#include <string>
using namespace std;

int main(){
    string word;
    cin >> word;
    cout << string(word.length(), '*') << word << string(word.length(), '*');
    return 0;
}
