class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==0)
            return -1;
        
        int low = 0, high = nums.size()-1;

        while(low <= high )
        {
            int mid = low + (high-low) /2;
            if(target == nums[mid])
                return mid;
            
            //if left part is monotonically increasing, or the pivot point is on the right part
            if(nums[low] <= nums[mid])
            {
                if(target < nums[mid] and nums[low] <= target)
                    high = mid-1;
                else
                    low = mid+1;
            }
             //if right part is monotonically increasing, or the pivot point is on the left part
            else
            {
                if(nums[mid]<target and target <= nums[high])
                    low = mid+1;
                else
                    high = mid-1;
            }
        }
        return -1;
    }
};