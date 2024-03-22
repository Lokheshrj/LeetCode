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
    bool isPalindrome(ListNode* head) 
    {
        vector<int>t;
        while(head)
        {
            t.push_back(head->val);
            head=head->next;
        }
        int s=t.size()-1;
        int l=0;
        while(l<=s/2)
        {
            if(t[l]!=t[s-l])
            return false;
            ++l;
        }
        return true;
    }
};