class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> distinct;
        for (int num : nums) {
            if (distinct.contains(num)) {
                return true;
            } else {
                distinct.insert(num);
            }
        }
        return false;
    }
};
/*
Strategy: Hash Set
n is the length of array nums
Time Complexity: O(n)
Space Complexity: O(n)
*/
