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
    ListNode* mergeNodes(ListNode* head) {
        // start from node after initial zero
        ListNode* nptr = head -> next; 
        ListNode* ptr = head ->next;

        while(ptr != nullptr){
            int sum = 0;
            // find sum until zero is encountered;
            while(ptr->val != 0){
                sum +=ptr->val;
                ptr = ptr->next;
            }
            // Assign the sum to the current node's value.
            nptr->val = sum;
            // move ptr to first non-zero value of next block
            ptr = ptr->next;
            // move nptr to this node as well
            nptr ->next = ptr;
            nptr = nptr->next;

        }
        return head->next;
    }
};