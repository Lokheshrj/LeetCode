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
        ListNode *p,*end=list2;
        while(end&&end->next)
        {
            p=end;
            end=end->next->next;
        }
        if(!end)
            end=p->next?p->next:p;

        ListNode *prev,*curr=list1;
        int count=0;
        while(count<a)
        {
            prev=curr;
            curr=curr->next;
            ++count;
        }
        prev->next=list2;
        while(count<b)
        {
            curr=curr->next;
            ++count;
        }
        end->next=curr->next;
        return list1;
    }
};