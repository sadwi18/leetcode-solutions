class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int ans = abs(0-requests[0]);
        int i=0;
        int j=1;
        while(j<requests.size()) {
            ans += abs(requests[i]-requests[j]);
            i++;
            j++;
        }
        return ans;   
    }
};