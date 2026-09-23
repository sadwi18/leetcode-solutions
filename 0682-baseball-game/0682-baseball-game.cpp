class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(int i=0 ; i<operations.size() ; i++) {
            if (operations[i] != "C" && operations[i] != "D" && operations[i] != "+") {
                st.push(stoi(operations[i]));
            }
            else if (operations[i] == "C") {
                st.pop();
            }
            else if (operations[i] == "D") {
                st.push(st.top()*2);
            }
            else {
                int first = st.top();
                st.pop();
                int second = st.top();
                st.push(first);
                st.push(first+second);
            }
        }   
        int ans=0;
        while(!st.empty()) {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};