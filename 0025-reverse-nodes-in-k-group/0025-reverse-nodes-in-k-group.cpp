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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        
        // 1. Check if there are at least 'k' nodes left in the list
        for (int i = 0; i < k; i++) {
            if (!curr) return head; // Less than k nodes left, keep them as is
            curr = curr->next;
        }
        ListNode* newHead = reverseList(head, curr);

        head->next = reverseKGroup(curr, k);
        
        return newHead;
    }
private:
    ListNode* reverseList(ListNode* head, ListNode* last){
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while(curr != last){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};