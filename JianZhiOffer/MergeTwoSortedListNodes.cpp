//输入两个单调递增的链表，输出两个链表合成后的链表，当然我们需要合成后的链表满足单调不减规则。
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
        ListNode* p= new ListNode(0);
        ListNode* dummy= p;
        while(pHead1!=nullptr&&pHead2!=nullptr)
        {
            ListNode *temp= new ListNode(0);
            if (pHead1->val<=pHead2->val)
            {
                temp=pHead1;                
                pHead1= pHead1->next;
            }
            else 
            {
                temp=pHead2;
                pHead2= pHead2->next;
            }
            p->next= temp;
            p= p->next;            
        }
        if(pHead1!=nullptr)
        {
            p->next= pHead1;
        }
        if(pHead2!=nullptr)
        {
            p->next= pHead2;
        }
        return dummy->next;
    }
};
