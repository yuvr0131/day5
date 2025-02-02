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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
              int carry=0;
        ListNode *dummyhead=new ListNode(0);
        ListNode *curr=dummyhead;
        while(l1 || l2 ||carry)
        {
            int value1=l1?l1->val:0;
            int value2=l2?l2->val:0;
            int currentvalue=value1+value2+carry;
            ListNode*node=new ListNode(currentvalue%10);
            carry=currentvalue/10;
            if(l1)
            {
                l1=l1->next;
            }
            if(l2)
            {
                l2=l2->next;
            }
            curr->next=node;
            curr=curr->next;
        }
        return dummyhead->next;
    }
    
};