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
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *prev=nullptr;
        ListNode* curr=slow->next;
        slow->next=nullptr;
        ListNode *next=nullptr;
        while(curr!=nullptr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        while(head!=nullptr && prev!=nullptr){
        ListNode* temp1=head->next;
        ListNode *temp2=prev->next;
        head->next=prev;
        prev->next=temp1;
        head=temp1;
        prev=temp2;
        }
        
    }
};
