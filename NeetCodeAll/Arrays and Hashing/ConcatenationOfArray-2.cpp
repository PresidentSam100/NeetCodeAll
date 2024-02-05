class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> concatenation;
        concatenation.insert(concatenation.end(), nums.begin(), nums.end());
        concatenation.insert(concatenation.end(), nums.begin(), nums.end());
        return concatenation;
    }
};
/*
Strategy: Vector methods
n is the length of array nums
Time Complexity: O(n)
Space Complexity: O(n)
*/
