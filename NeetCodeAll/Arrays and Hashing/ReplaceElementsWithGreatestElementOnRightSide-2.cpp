class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int greatest = -1;
        int n = size(arr);
        for (int i = n - 1; i >= 0; i--) {
            int temp = arr[i];
            arr[i] = greatest;
            greatest = max(temp, greatest);
        }
        return arr;
    }
};
/*
Strategy: Loop, update, and compare in place
n is the length of array arr
Time Complexity: O(n)
Space Complexity: O(1)
*/
