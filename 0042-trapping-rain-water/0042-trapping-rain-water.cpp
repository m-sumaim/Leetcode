class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> lmax(n);
        vector<int> rmax(n);

        int sol = 0;

        lmax[0] = height[0];
        for(int i=1; i<n; i++){
            lmax[i] = max(height[i], lmax[i-1]);
        }

        rmax[n-1] = height[n-1];
        for(int i=n-2; i>=0; i--){
            rmax[i] = max(height[i], rmax[i+1]);
        }

        for(int i=1; i<n-1; i++){
            sol += (min(lmax[i], rmax[i]) - height[i]);
        }

        return sol;
    }
};