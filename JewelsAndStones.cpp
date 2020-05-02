class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        int jewels[256] = {0};
        
        for(int i = 0; i < J.size(); i++) {
            jewels[J[i]] = 1;
        }
        
        int ctr = 0;
        for(int i = 0; i < S.size(); i++) {
            
            if (jewels[S[i]]) {
                ctr++;
            }
        }
        
        return ctr;
    }
};
