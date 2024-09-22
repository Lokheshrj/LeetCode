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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode ans=ListNode(0);
        ListNode *t=&ans;
        bool b=false;
        while(l1&&l2)
        {
            if(l1->val+l2->val+b<10)
            {
                t->next=new ListNode(l1->val+l2->val+b);
                b=l1->val+l2->val+b>10?true:false;
            }    
            else
            {
                t->next=new ListNode(((l1->val+l2->val+b)%10));
                b=true;
            }
            if(l1&&l2)
            {
                l1=l1->next;
            l2=l2->next;
            t=t->next;
            }
        }
        while(l1)
        {
            cout<<"running \n "<<l1->val;
            if(b)
            {
                t->next=new ListNode(((l1->val+b)%10));
                b=l1->val+b>9?true:false;
            }
            else
                t->next=l1;
            l1=l1->next;
            t=t->next;
        }
        while(l2)
        {
            if(b)
            {
                t->next=new ListNode(((l2->val+b)%10));
                b=l2->val+b>9?true:false;
            }
            else
                t->next=l2;
            l2=l2->next;
            t=t->next;
        }

        if(b)
            t->next=new ListNode(1);

        t=(&ans)->next;
        
        return t;
    }
};