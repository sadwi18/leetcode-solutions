class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int psum=0;
        int ssum=0;
        for(int i=0 ; i<nums.size() ; i++){
            ssum += nums[i];
        }
        for(int i=0 ; i<nums.size() ; i++){
            ssum-=nums[i];
            if(psum==ssum) return i;
            psum+=nums[i];
        }
        return -1;
    }
};