#include <bits/stdc++.h>
using namespace std;
int main() {
    string str1;
    string str2;

    cin >> str1;
    cin >> str2;

    for (int i = 0; i < str1.length(); i++) {
        str1[i] = tolower(str1[i]); 
        str2[i] = tolower(str2[i]); 
    }
    if (str1 < str2) {
        cout << -1 << "\n";
    }
    else if (str1 > str2) {
        cout << 1 << "\n";
    }
    else{
        cout << 0 << "\n";
    }
        
}