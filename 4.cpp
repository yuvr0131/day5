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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummyhead=new ListNode(0);
        dummyhead->next=head;
        ListNode *first=dummyhead;
        ListNode *second=dummyhead;
        for(int distance=0;distance<n+1;distance++)
        {
            first=first->next;
        }
        while(first!=NULL)
        {
            second=second->next;
            first=first->next;
        }
        second->next=second->next->next;
        return dummyhead->next;
    }
};