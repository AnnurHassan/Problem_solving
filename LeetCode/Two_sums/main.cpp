#include <iostream>
using namespace std;
#include <vector>


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = i + 1;

        while (i < nums.size()) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            } 
            else if (j == nums.size() - 1) {
                i += 1;
                j = i + 1;
            }
            else {
                j += 1;
            }
        }
        return {};
    }
};

int main() {
    Solution test;
    vector<int> nums = {3, 2, 4};
    vector<int> index = test.twoSum(nums, 6);

    for (int i = 0; i < index.size(); i++) {
        cout << index[i] << " ";
    }
}