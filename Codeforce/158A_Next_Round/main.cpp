#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    if (1 <= n <= 50 && 1 <= k <= 50 && n >= k) {
        int arr[n];
        int count = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int kth_score = arr[k - 1];
        for (int i = 0; i < n; i++) {
            if (arr[i] >= kth_score && arr[i] > 0) {
                count += 1;
            }
        }

        cout << count;
    }
}