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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*dummyhead=new ListNode(0);
        ListNode*curr=dummyhead;
        if(list1==NULL)
        {
            return list2;
        }
        if(list2==NULL)
        {
            return list1;
        }
        while(list1 && list2)
        {
            int value1=list1->val;
            int value2=list2->val;
            if(value1<=value2)
            {
                curr->next=list1;
                list1=list1->next;
                curr=curr->next;
            }
            else
            {
                curr->next=list2;
                list2=list2->next;
                curr=curr->next;
            }
            if(list1)
            {
                curr->next=list1;
            }
            if(list2)
            {
                curr->next=list2;
            }
        }
        return dummyhead->next;
    }
};