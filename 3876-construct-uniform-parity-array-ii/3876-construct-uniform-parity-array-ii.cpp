class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mini = INT_MAX;
        bool flag = true;
        for(int i=0 ; i<nums1.size() ; i++) {
            if(nums1[i]%2 != 0) 
                mini = min(mini,nums1[i]);
        }
        for(int i=0 ; i<nums1.size() ; i++) {
            if(nums1[i]%2 == 0 && nums1[i]<mini && mini != INT_MAX) {
                flag = false;
            }
        }
        return flag;
        
    }
};