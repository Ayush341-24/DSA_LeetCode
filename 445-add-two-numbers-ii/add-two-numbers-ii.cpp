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
    ListNode* reverse(ListNode* head){
        ListNode* Next = new ListNode(NULL);
        ListNode* prev = NULL;
        while(head){
            Next = head -> next;
            head -> next = prev;
            prev = head;
            head = Next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);
        ListNode* ans = new ListNode();
        int sum = 0;
        int carry = 0;
        while(l1 || l2){
            if(l1){
                sum += l1 -> val;
                l1 = l1 -> next;
            }
            if(l2){
                sum += l2 -> val;
                l2 = l2 -> next;
            }
            ans -> val = sum % 10;
            carry = sum/10;

            ListNode* Next = new ListNode(carry);
            Next -> next = ans;
            ans = Next;
            sum = carry;
        }
        if(carry){
            return ans;
        }
        return ans -> next;
    }
};