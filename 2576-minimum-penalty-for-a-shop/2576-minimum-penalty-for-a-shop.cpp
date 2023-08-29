class Solution {
public:
    int bestClosingTime(string C) {
        // get the max profit that's when you return
        int mx = 0, curr = 0, hour = -1;
        for(int i=0; i<C.size(); ++i){
            curr += (C[i] == 'Y')?1:-1;
            if(curr > mx){
                mx = curr;
                hour = i;
            }
        }
        return hour+1;
    }
};