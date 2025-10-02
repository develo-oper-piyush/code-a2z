class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (auto num : nums) freq[num]++;

        int max_freq = INT_MIN;
        int curr = -1;
        for (auto it : freq){
            if (it.second > curr) {
                curr = it.second;
                max_freq = it.second;
            }
            else if (it.second == curr) {
                max_freq += it.second;
                curr = it.second;
            }
        }
        return max_freq;
    }
};
