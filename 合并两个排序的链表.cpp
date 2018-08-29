/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        if(pHead1==NULL&&pHead2==NULL)
            return NULL;
        else if(pHead1==NULL)
            return pHead2;
        else if(pHead2==NULL)
            return pHead1;

        if(pHead1->val>pHead2->val)
        {
            return Merge(pHead2,pHead1);
        }
        ListNode* res = pHead1;
        pHead1 = pHead1->next;
        res->next = Merge(pHead1,pHead2);
        return res;
        
    }
};