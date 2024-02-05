class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> replaced (size(arr));
        int greatest = -1;
        for (int i = size(arr) - 1; i >= 0; i--) {
            int temp = arr[i];
            replaced[i] = greatest;
            greatest = max(temp, greatest);
        }
        return replaced;
    }
};
/*
Strategy: Loop, update, and compare in new
n is the length of array arr
Time Complexity: O(n)
Space Complexity: O(n)
*/
