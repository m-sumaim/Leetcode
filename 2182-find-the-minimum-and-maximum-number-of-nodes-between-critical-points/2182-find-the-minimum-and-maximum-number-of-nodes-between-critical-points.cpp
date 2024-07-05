/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> cp;
        ListNode* curr = head;
        ListNode* prev = nullptr;
        int position = 0;

        while(curr != nullptr && curr->next!= nullptr){
            if(prev!=nullptr && curr->next!= nullptr){
                if(curr->val > prev->val && curr->val > curr->next->val || curr->val < prev->val && curr->val < curr->next->val){
                    cp.push_back(position);
                }
            }
            prev = curr;
            curr = curr->next;
            position++;
        }

        if(cp.size() < 2){
            return {-1, -1};
        }

        int minD = INT_MAX;
        int maxD = cp.back() - cp.front();

        for(int i=1; i<cp.size(); i++){
            minD = min(minD, cp[i]-cp[i-1]);
        }

        

        return {minD, maxD};
    }
};