class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int>ans(n,0);
        stack<int>st;

        for(int i=n-1 ; i>=0 ; i--) {
            while(!st.empty() && temperatures[st.top()]<=temperatures[i]) {
                st.pop();
            }
            if(st.empty()) {
                ans[i]=0;
            }
            else {
                ans[i]=st.top()-i;
            }
            st.push(i);
        }
        return ans;


    // brute force
        // int n = temperatures.size();
        // vector<int>v;
        // for(int i=0 ; i<n ; i++) {
        //     bool found=false;
        //     for(int j=i+1 ; j<n ; j++) {
        //         if(temperatures[i]<temperatures[j]) {
        //             v.push_back(j-i);
        //             found=true;
        //             break;
        //         }
        //     }
        //     if(!found) v.push_back(0);
        // }
        // return v;
    }
};