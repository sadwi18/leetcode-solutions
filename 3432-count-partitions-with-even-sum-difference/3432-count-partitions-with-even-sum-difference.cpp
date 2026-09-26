class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int psum=0;
        int ssum=0;
        for(int i=0 ; i<nums.size() ; i++) {
            ssum+=nums[i];
        }
        int i=0;
        int count=0;
        while(i<nums.size()-1) {
            psum+=nums[i];
            ssum-=nums[i];
            if((psum-ssum) % 2 == 0)  count++;
            i++;
        }
        return count;
    }
};