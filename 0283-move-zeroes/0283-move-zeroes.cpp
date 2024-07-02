class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ptr = 0;    // to maintain pointer before the first zero encountered each time during alteration
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0){      // if non zero element is found, replace it with first zero found earlier
                swap(nums[i], nums[ptr]);
                ptr++;
            }
        }
    }
};