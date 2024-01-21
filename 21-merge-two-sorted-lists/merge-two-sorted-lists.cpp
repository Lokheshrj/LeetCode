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
        if(list1==nullptr)
            return list2;
        else if(list2==nullptr)
            return list1;
        ListNode *temp=NULL,*r=NULL;
        if(list1 && list2)
        {
        if(list1->val<list2->val)
        {
            temp= new ListNode(list1->val);
            r=temp;
            list1=list1->next;
        }
        else if(list1->val>list2->val)
        {
            temp= new ListNode(list2->val);
            r=temp;
            list2=list2->next;
        }
        else
        {
            temp= new ListNode(list1->val);
            r=temp;
            temp->next=new ListNode(list2->val);
            temp=temp->next;
            list1=list1->next;
            list2=list2->next;
        }
        }
        while(list1 && list2)
        {
            if(list1->val<list2->val)
            {
                temp->next= new ListNode(list1->val);
                temp=temp->next;
                list1=list1->next;
            }
            else if(list1->val>list2->val)
            {
                temp->next= new ListNode(list2->val);
                temp=temp->next;
                list2=list2->next;
            }
            else
            {
                temp->next= new ListNode(list1->val);
                temp=temp->next;
                temp->next= new ListNode(list1->val);
                temp=temp->next;
                list1=list1->next;
                list2=list2->next;
            }
        }
        while(list2)
        {
            temp->next=new ListNode(list2->val);
            temp=temp->next;
            list2=list2->next;
        }
        while(list1)
        {
            temp->next=new ListNode(list1->val);
            temp=temp->next;
            list1=list1->next;
        }
        return r;
    }
};