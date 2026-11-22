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
    ListNode* reverseList(ListNode* head){
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
    bool isPalindrome(ListNode* head){
        if(!head || !head -> next){
            return true;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;
        while(fast && fast -> next){
            fast = fast -> next -> next;
            prev = slow;
            slow = slow -> next;
        }
        ListNode* temp = reverseList(slow);
        prev -> next = NULL;
        while(temp && head){
            if(temp -> val != head -> val){
                return false;
            }
            temp = temp -> next;
            head = head -> next;
        }
        return true;
    }
};