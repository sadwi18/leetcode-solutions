class Solution {
public:
    string predictPartyVictory(string senate) {
        deque<int>r;
        deque<int>d;
        for(int i=0 ; i<senate.size() ; i++) {
            if(senate[i]=='R') r.push_back(i);
            else d.push_back(i);
        }
        while(!r.empty() && !d.empty()) {
            if(r.front() < d.front()) {
                d.pop_front();
                int rfront = r.front()+senate.size();
                r.pop_front();
                r.push_back(rfront);
            }
            else {
                r.pop_front();
                int dfront = d.front()+senate.size();
                d.pop_front();
                d.push_back(dfront);
            }
        }
        return r.empty() ? "Dire" : "Radiant";
    }
};