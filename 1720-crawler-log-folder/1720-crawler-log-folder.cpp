class Solution {
public:
    int minOperations(vector<string>& logs) {
        // best way would be to use stack for this purpose
        // using vector as a stack

        // vector<string> path_stack;
        // for(const string& i : logs){
        //     if(i =="../"){
        //         if(!path_stack.empty()){
        //             path_stack.pop_back();
        //         }
        //     }else if(i != "./"){
        //         path_stack.push_back(i);
        //     }
        // }
        // return path_stack.size();


        // Method 2 : Depth Counting

        int res = 0;
        for(const string& i : logs){
            if(i == "../"){
                if(res>0){
                    res--;
                }
            }else if(i !="./"){
                res++;
            }
        }
        return res;
    }
};