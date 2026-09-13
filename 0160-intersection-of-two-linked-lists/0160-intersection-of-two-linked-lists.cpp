/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp;
        temp=headA;
        map <ListNode*,int> mp;
        while(temp)
        {
            mp[temp]=1;
            temp=temp->next;
        }
        temp=headB;
        while(temp)
        {
            if(mp[temp]==true)
            {
                return temp;
            }
            temp=temp->next;
        }
        return NULL;
    }
};