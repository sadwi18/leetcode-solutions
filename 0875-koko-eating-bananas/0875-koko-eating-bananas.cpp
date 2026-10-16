class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        //ceil(piles[i]/speed)
        int maxi=0;
        for(int i=0 ; i<piles.size() ; i++) {
            maxi=max(maxi, piles[i]);
        }
        int low=1 , high=maxi;
        int ans=maxi;
        while(low<=high) {
            int mid=low+(high-low)/2;
            long long hours=0;
            for(int i=0 ; i<piles.size() ; i++) {
                hours+=(piles[i]+(long long)mid-1)/mid;
            }
            if(hours<=h) {
                ans=mid;
                high=mid-1;
            } 
            else {
                low=mid+1;
            }
        }
        return ans;
    }
};