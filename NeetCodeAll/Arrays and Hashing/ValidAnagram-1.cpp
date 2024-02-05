class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};
/*
Strategy: Sort and compare
n is the max length of strings s and t
Time Complexity: O(nlogn)
Space Complexity: O(1)
*/
