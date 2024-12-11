#include <iostream>
using namespace std;


class Solution {
public:
    int sum(int num1, int num2) {

        if (-100 <= num1 <= 100 && -100 <= num2 <= 100) {
            return (num1 + num2);
        } 
    }
};

int main() {
    Solution test;
    int sum = test.sum(12, 5);
    cout << sum << "\n";

    sum = test.sum(-10, 4);
    cout << sum;

    
}