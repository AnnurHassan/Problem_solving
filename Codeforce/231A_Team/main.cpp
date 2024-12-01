#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (1 <= n <= 1000) {
        int a, b, c;  
        int count = 0;
        while (n--) {
            cin >> a >> b >> c;

            if (a + b + c >= 2) {
                count += 1;
            }
        }

        cout << count << "\n";
    }
}