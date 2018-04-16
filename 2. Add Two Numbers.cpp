/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == NULL&&l2 == NULL) return NULL;
        if(l1 == NULL&&l2!=NULL)
            l1 = new ListNode(0);
        if(l2 == NULL&&l1 != NULL)
            l2 = new ListNode(0);
        
        int value = l1->val+l2->val;
        ListNode* result = new ListNode(value % 10);
        result->next = addTwoNumbers(l1->next,l2->next);
        
        if(value>=10)
            result->next = addTwoNumbers(new ListNode(value/10),result->next);
        
        return result;
        
    }
};
