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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) 
    {
        /*ListNode *p,*end=list2;
        while(end&&end->next)
        {
            p=end;
            end=end->next->next;
        }
        if(!end)
            end=p->next?p->next:p;*/
        ListNode *end=list2;
        while(end->next)
        end=end->next;

        ListNode *t,*curr=list1;

        for(int i=0;i<a-1;i++)
        curr=curr->next;

        t=curr->next;
        curr->next=list2;

        for(int i=a;i<b;i++)
        t=t->next;

        end->next=t->next;
        return list1;
    }
};