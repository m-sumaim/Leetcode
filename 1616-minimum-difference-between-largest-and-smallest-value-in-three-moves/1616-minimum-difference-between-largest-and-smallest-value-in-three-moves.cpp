class Solution {
public:
    int minDifference(vector<int>& nums) {
        // Intution : we have to sort the array and look among 4 possible combiations
        // remove last 3 elements
        // remove first 3 elements
        // remove first 1 and last 2
        // remove first 2 and last 1
    // removal ~ set to the element next or before the removal
    // then find max-min in the sorted array
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if(n<=4)
            return 0;
        int minVal = INT_MAX;
        

        minVal = min(minVal, nums[n-4]-nums[0]);    // remove last 3
        minVal = min(minVal, nums[n-1]-nums[3]);    // remove first 3
        minVal = min(minVal, nums[n-2]-nums[2]);    // remove 1 from last & 2 from first
        minVal = min(minVal, nums[n-3]-nums[1]);    // remove 2 from last & 1 from frront

        return minVal;
        
    }
};