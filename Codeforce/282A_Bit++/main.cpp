#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    if (1 <= n <= 150) {
        int x = 0;
        string experssion;
        while (n--) {
            cin >> experssion;
            if (experssion.find("++") != string::npos) {
                x += 1;
            }

            else if (experssion.find("--") != string::npos) {
                x -= 1;
            }
        }

        cout << x << "\n";
    }
}