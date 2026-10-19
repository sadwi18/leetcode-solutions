class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin() , nums.end());
        vector<int>v;
        int i=0;
        while(i<nums.size()) {
            if(nums[i]>target) break;
            if(nums[i]==target) v.push_back(i);
            i++;
            
        }
        return v;
        
    }
};