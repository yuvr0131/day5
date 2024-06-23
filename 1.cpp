/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode*curr=head;
    struct ListNode*prev=NULL;
    
    while(curr!=NULL )
    {struct ListNode*next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}