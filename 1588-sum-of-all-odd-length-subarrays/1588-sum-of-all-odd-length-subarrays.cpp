class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        int i=0;
        while(i<arr.size()) {
            int j=i;
            while(j<arr.size()) {
                if((j-i) % 2 == 0) {
                    for(int k=i ; k<=j ; k++) {
                        sum+=arr[k];
                    }
                }
                j++;
            }
            i++;
        }
        return sum;
    }
};