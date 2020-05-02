// given linked list 1->2->3->4->5
// output should be=> 2->1->4->3->5 

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
    ListNode* swapPairs(ListNode* head) {
        ListNode* p=head;
        ListNode* prev=head;
       // if(p->next!=NULL)
         //   head=p->next;
        
        while(p!=NULL && p->next!=NULL)
        {
            ListNode* temp;
            temp=p->next;
            p->next=temp->next;
            temp->next=p;
            
            if(head==p)
                head=temp;
            else
                prev->next=temp;
            prev=p;
            p=p->next;
        }
        return head;
    }
};