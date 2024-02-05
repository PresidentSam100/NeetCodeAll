class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices (2);
        int n = size(nums);
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    indices[0] = i;
                    indices[1] = j;
                    return indices;
                }
            }
        }
        return indices;
    }
};
/*
Strategy: Check all pairs
n is the length of array nums
Time Complexity: O(n^2)
Space Complexity: O(1)
*/
