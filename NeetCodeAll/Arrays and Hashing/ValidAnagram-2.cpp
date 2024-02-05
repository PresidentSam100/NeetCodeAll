class Solution {
public:
    bool isAnagram(string s, string t) {
        if (size(s) != size(t)) {
            return false;
        }
        unordered_map<char, int> counts;
        for (char x : s) {
            counts[x]++;
        }
        for (char x : t) {
            counts[x]--;
        }
        for (auto count : counts) {
            if (count.second != 0) {
                return false;
            }
        }
        return true;
    }
};
/*
Strategy: Hash Tabling
n is the max length of strings s and t
Time Complexity: O(n)
Space Complexity: O(n)
*/
