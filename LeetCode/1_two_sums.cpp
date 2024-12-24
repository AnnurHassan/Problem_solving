// Source : https://leetcode.com/problems/two-sum/description/
// Author : Annur Hassan



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