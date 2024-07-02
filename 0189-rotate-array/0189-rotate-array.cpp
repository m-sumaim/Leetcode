class Solution {
public:

    void rot(vector<int> &arr, int low, int high){
        while(low < high){
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        k = k % n;
        rot(nums, 0, n-k-1);
        rot(nums, n-k, n-1);
        rot(nums, 0, n-1);
    }

    
};