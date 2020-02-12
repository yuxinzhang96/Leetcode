//输入一个链表，按链表从尾到头的顺序返回一个ArrayList。
/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> result;
        stack <int> s; //用了栈
        while(head!=nullptr)
        {
            s.push(head->val);
            head=head->next;
        }
        while(!s.empty())
        {
            int tem= s.top();
            result.push_back(tem);
            s.pop();
        }
        return result;
    }
};
