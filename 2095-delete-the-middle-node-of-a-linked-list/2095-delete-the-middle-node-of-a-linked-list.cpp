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

int size1(ListNode* head)
{ int cnt=0;
    ListNode* temp=head;
    while(temp)
    {
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL) { return NULL;}
        int size=size1(head);
        int mid=(size)/2;
       ListNode* temp=head;
        int cnt=0;
        ListNode* prev=NULL;
        while(temp)
        {
            cnt++;
            if(cnt==mid+1)
            {
                prev->next=prev->next->next;
                delete temp;
                break;
            }
            prev=temp;
            temp=temp->next;
        }
        return head;
        
    }
};