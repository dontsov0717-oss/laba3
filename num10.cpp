#include <string>
#include <iostream>
using namespace std;

int main() {
    string text;
    getline(cin, text);
    float count = 0;
    for (int i=0; i <= (text.length()-1); i++) {
        if (text[i] == 'a') {
            count++;
        }
    }
    cout << count/text.length()*100 << '%';
    return 0;
}
