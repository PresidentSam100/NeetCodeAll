class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> concatenation;
        for (int num : nums) {
            concatenation.push_back(num);
        }
        for (int num : nums) {
            concatenation.push_back(num);
        }
        return concatenation;
    }
};
