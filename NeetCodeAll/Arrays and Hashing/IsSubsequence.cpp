class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        for (char c : t) {
            if (c == s[i]) {
                i++;
            }
        }
        return i == size(s);
    }
}
/*
Strategy: Simple Brute Force
n is the length of string t
Time Complexity: O(n)
Space Complexity: O(1)
*/
