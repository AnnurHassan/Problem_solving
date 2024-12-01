#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (1 <= n <= 100) {
        string word;
        for (int i = 0; i < n; i++) {
            cin >> word;

            if (1 <= word.size() <= 100) {

                if (word.size() > 10) {
                    cout << word[0] << word.size() - 2 << word[word.size() - 1] << "\n";
                }

                else {
                    cout << word << "\n";
                }
            }

        }
    }
}
    

