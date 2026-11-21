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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp = head;
        while(temp){
            count++;
            temp = temp -> next;
        }
        if(count == 1){
            return NULL;
        }
        temp = head;
        int req = count - n;
        if(req == 0){
            return head -> next;
        }
        while(req){
            if(req == 1){
                temp -> next = temp -> next -> next;
            }
            else{
                temp = temp -> next;
            }
            req--;
        }
        return head;
    }
};