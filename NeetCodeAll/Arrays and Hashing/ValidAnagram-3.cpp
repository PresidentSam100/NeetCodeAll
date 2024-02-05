class Solution {
public:
    bool isAnagram(string s, string t) {
        int counts[26];
        for (char c : s) {
            counts[c - 'a']++;
        }
        for (char c : t) {
            counts[c - 'a']--;
        }
        for (int count : counts) {
            if (count != 0) {
                return false;
            }
        }
        return true;
    }
};
/*
Strategy: Hash Table with array
n is the max length of strings s and t
Time Complexity: O(n)
Space Complexity: O(1)
*/
