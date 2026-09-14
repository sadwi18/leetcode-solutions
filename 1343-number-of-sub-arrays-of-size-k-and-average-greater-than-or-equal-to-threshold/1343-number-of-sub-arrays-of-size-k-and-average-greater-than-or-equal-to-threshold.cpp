class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int sum=0;
        double avg = 0.0;
        int count=0;
        for(int i=0 ; i<k ; i++) {
            sum+=arr[i];
        }
        avg = (double)sum/k;
        if(avg>=threshold) {
            count++;
        }
        int j=0;
        for(int i=k ; i<n ; i++) {
            sum-=arr[j];
            j++;
            sum+=arr[i];
            avg=(double)(sum/k);
            if(avg>=threshold) count++;
        }
        return count;
    }
};