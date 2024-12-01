#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    if (s.length() <= 10*10*10){
        s[0] = toupper(s[0]);
        cout << s;
    }
}