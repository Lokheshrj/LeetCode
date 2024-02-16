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
    ListNode* removeele(ListNode *r,int *n)
    {
        if(r->next)
        r->next=removeele(r->next,n);
        (*n)=(*n)-1;
        if(*n==0)
        {
            cout<<r->val;
            return r->next;
        }
        return r;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        return removeele(head,&n);
    }
};