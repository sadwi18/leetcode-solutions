class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // int maxi = 0;
        // for (int i=0 ; i<nums.size() ; i++) {
        //     int zero = 0;
        //     for (int j=i ; j<nums.size() ; j++) {
        //         if(nums[j]==0)
        //         {
        //             zero++;
        //         }
        //         if(zero > k)
        //         {
        //             break;
        //         }
        //         int len=j-i+1;
        //         maxi=max(maxi, len);
        //     }
        // }
        // return maxi;        --> brute force but TLE


        int n = nums.size();
        int l = 0, r = 0;
        int zeros = 0;
        int maxlen = 0;
        while (r < n) {
            if (nums[r] == 0)
                zeros++;
            while (zeros > k) {
                if (nums[l] == 0)
                    zeros--;
                l++;
            }
            int len = r - l + 1;
            maxlen = max(maxlen, len);
            r++;
        }
        return maxlen;
    }
};