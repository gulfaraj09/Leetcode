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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return head;
        if(head->val == val && head->next == nullptr){
            delete head; 
            head = nullptr;
            return head;
        }
        ListNode* slow;
        ListNode* fast;
        while(head != nullptr && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        // If the entire list was stripped because all elements matched 'val'
        if (head == nullptr) return head;

        // Initialize your tracking pointers onto the newly cleaned head
        slow = head;
        fast = head->next;

        while(fast){
            if (fast != nullptr && fast->val == val) {
                slow->next = fast->next; 
                delete fast;             
                fast = slow->next;       
            } else {
                slow = fast;
                if (fast != nullptr) fast = fast->next;
            }
        }
        return head;
    }
};
