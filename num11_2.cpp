#include <string>
#include <iostream>
using namespace std;

int main() {
    string text = "Can you can a can as a canner can can a can?";
    for (int i=0; i <= text.length()-2; i++) {
        if ((text[i] == 'C' or text[i] == 'c') and text[i+1] == 'a' and text[i+2] == 'n') {
            text.erase(i, 3);
            text.insert(i, "new_word");
        }
    }
    cout << text << endl;
    return 0;
}