class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = size(nums);
        for (int i = 0; i < n; i++) {
            nums.push_back(nums[i]);
        }
        return nums;
    }
};
/*
Strategy: Push back to original
n is the length of array nums
Time Complexity: O(n)
Space Complexity: O(1)
*/
