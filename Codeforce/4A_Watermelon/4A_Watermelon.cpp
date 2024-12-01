#include <iostream>
using namespace std;

int main() {
    
    int weight;
    cin >> weight;

    if (1 <= weight <= 100) {

        if (weight % 2 == 0 && weight > 3) {

            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}