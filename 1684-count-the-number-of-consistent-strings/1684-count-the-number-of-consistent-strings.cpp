
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        for(int i=0 ; i<words.size() ; i++) {
            bool found=true;
            for(int j=0 ; j<words[i].size() ; j++) {
                bool exists=false;
                for(int k=0 ; k<allowed.size() ; k++) {
                    if(words[i][j]==allowed[k]) {
                        exists=true;
                        break;
                    }
                }
                if(!exists) {
                    found=false;
                    break;
                }
            }
            if(found) {
                count++;
            }
        }
        return count;
    }
};
