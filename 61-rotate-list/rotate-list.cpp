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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head -> next || k == 0){
            return head;
        }
        ListNode* temp = head;
        int count = 1;
        while(temp -> next){
            count++;
            temp = temp -> next;
        }
        k = k % count;
        if(k == 0){
            return head;
        }
        temp -> next = head;
        int remain =  count-k;
        ListNode* tail = head;
        for(int i=1; i < remain; i++){
            tail = tail -> next;
        }
        ListNode* newHead = tail -> next;
        tail -> next = NULL;

        return newHead;

    }
};