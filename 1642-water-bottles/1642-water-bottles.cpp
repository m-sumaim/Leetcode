class Solution {
public:
    int numWaterBottles(int numB, int numE) {
        int sol = numB;
        while(numB >= numE){
            int div = numB/numE;
            numB = div + numB%numE;
            sol = sol + div;
        }
        
        return sol;
    }
};