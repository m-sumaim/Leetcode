class Solution {
public:
    string convertToTitle(int colNum) {
        string res;
        while(colNum > 0){
            res = char ('A' + (colNum-1) %26) + res;
            colNum = (colNum-1)/26;
        }
        return res;
    }
};