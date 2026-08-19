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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
         int digit1=0;
         int digit2=0;
         ListNode dummy(0);
        ListNode* tail = &dummy;
        while(l1!=nullptr || l2!=nullptr || carry){
            if(l1!=nullptr) digit1=l1->val;
            else digit1=0;
            if(l2!=nullptr) digit2=l2->val;
            else digit2=0;
            int sum=digit1+digit2+carry;
            int result=sum%10;
            carry=sum/10;
           tail->next = new ListNode(result);

            // Move tail to the new node
            tail = tail->next;

            // Move input lists only if they exist
            if (l1 != nullptr)
                l1 = l1->next;

            if (l2 != nullptr)
                l2 = l2->next;

        }
        return dummy.next;
    }
};
