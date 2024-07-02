class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // Using Hashmaps:
        // vector<int> ans;
        // map<int, int> count;
        // for(int i=0; i<nums1.size(); i++){
        //     count[nums1[i]]++;
        // }

        // for(int i=0; i<nums2.size(); i++){
        //     auto it = count.find(nums2[i]);
        //     if(it != count.end() && it->second > 0){
        //         ans.push_back(nums2[i]);
        //         it->second--;
        //     }
        // }

        // return ans;

        // Two pointer approach
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> result;
        int i=0, j=0;

        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] < nums2[j]){
                i++;
            }
            else if(nums1[i] > nums2[j])
                {
                    j++;
                }
            else{
                result.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return result;
    }
};