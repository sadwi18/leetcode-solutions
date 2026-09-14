class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        vector<int>sorted(nums.begin(),nums.end());
        sort(sorted.begin(),sorted.end());
        int start=-1,end=-1;
        int i=0,j=n-1;
        for(int i=0 ; i<n ; i++) {
            if(sorted[i]!=nums[i]) {
                start=i;
                break;
            }
        }
        if(start==-1) return 0;
        for(int j=n-1 ; j>=0 ; j--) {
            if(sorted[j]!=nums[j]) {
                end=j;
                break;
            }
        }
        return end-start+1;
    }
};