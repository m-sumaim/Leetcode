class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        
        priority_queue<pair<int, pair<int, int>>> pq;
        for(int i=0; i<nums1.size(); i++)
        {
            for(int j=0; j<nums2.size(); j++)
            {
                int sum = nums1[i] + nums2[j];
                if(pq.size() < k)
                    pq.push({sum, {nums1[i], nums2[j]}});
                else if(sum < pq.top().first)
                {
                    pq.pop();
                    pq.push({sum, {nums1[i], nums2[j]}});
                }
                else if(sum > pq.top().first)
                    break;
            }
        }
        vector<vector<int>> ans;
        while(!pq.empty())
        {
            ans.push_back({pq.top().second.first, pq.top().second.second});
            pq.pop();
        }
        // reverse(ans.begin(), ans.end());
        return ans;
    }

    // we create a max-heap and store the top k elements in the form "pair(sum,pair(nums1[i],nums2[j])"
    // if we find any smaller sum, then pop the largest and insert this new value
    // finally the heap will contain the k smallest sums
    // then insert the k sum pairs into array. the array will have the sum's in decreaeing order
    // then reverse the array, and return the array
};