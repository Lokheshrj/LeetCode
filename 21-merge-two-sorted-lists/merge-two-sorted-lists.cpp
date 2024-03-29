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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        if(!list1)
            return list2;
        else if(!list2)
            return list1;
        
        ListNode *h,*temp;
        if(list1->val<=list2->val)
        {
            h=list1;
            list1=list1->next;
        }
        else if(list1->val>list2->val)
        {
            h=list2;
            list2=list2->next;
        }
        temp=h;
        while(list1&&list2)
        {
            if(list1->val<=list2->val)
            {
                temp->next=list1;
                list1=list1->next;
            }
            else if(list1->val>list2->val)
            {
                temp->next=list2;
                list2=list2->next;
            }
            temp=temp->next;
        }
        while(list1)
        {
            temp->next=list1;
            temp=temp->next;
            list1=list1->next;
        }
        while(list2)
        {
            temp->next=list2;
            temp=temp->next;
            list2=list2->next;
        }
        return h;
    }
};