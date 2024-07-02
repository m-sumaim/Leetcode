class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        // we use 2 pointer approach
        // i keeps unique positions while j iterates and finds next diff element

        int i = 0;
        for(int j = 1; j<arr.size();j++){
            if(arr[i] != arr[j]){
                arr[++i] = arr[j];
            }
        }
        return i+1;
        
    }
};