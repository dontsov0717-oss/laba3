#include <iostream>
using namespace std;

int main() {
    string c1, c2, c3;
    cin >> c1 >> c2 >> c3;
    string the_longest = c1;
    string the_shortest = c1;

    if (c2.length() > the_longest.length()) {
        the_longest = c2;
    }
    if (c2.length() < the_shortest.length()) {
        the_shortest = c2;
    }

    if (c3.length() > the_longest.length()) {
        the_longest = c3;
    }
    if (c3.length() < the_shortest.length()) {
        the_shortest = c3;
    }

    cout << "the_longest: " << the_longest << endl;
    cout << "the_shortest: " << the_shortest << endl;

    return 0;
}