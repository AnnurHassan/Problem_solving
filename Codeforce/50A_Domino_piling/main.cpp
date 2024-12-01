#include <iostream>
using namespace std;


int main() {
    int m, n;
    cin >> m >> n;
    int number_of_dominos = 0;

    if (1 <= m <= 16 && 1 <= n <= 16) {
        number_of_dominos = (m * n) / 2;
    }
    cout << number_of_dominos;
}