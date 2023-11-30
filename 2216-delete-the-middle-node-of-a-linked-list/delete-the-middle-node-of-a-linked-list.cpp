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
class Solution 
{
public:
    ListNode* deleteMiddle(ListNode* head) 
    {
        int n=1;
        if(head->next==NULL)
        return NULL;
        ListNode *temp=head,*b=head;
        while(temp->next!=NULL)
        {
            ++n;
            temp=temp->next;
        }
        int c=1;
        temp=head;
        while(c<(n/2))
        {
            temp=temp->next;
            ++c;
        }
        if(temp->next!=NULL)
        temp->next=temp->next->next;
        return b;
    }
};