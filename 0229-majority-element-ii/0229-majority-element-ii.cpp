class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i : nums) {
            freq[i]++;
        }
        vector<int>v;
        int n = nums.size();
        for(auto &num : freq) {
            if(num.second > n/3) v.push_back(num.first);
        }
        return v;
    }
};