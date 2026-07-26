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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right)return head;
        ListNode* root = head;
        int i = 1;
        while(i < left){
            root = root-> next;
            i++;
        }

        while(left < right){
            int j = 1;
            ListNode* curr = head;
            while(j < right){
                curr = curr->next;
                j++;
            }
            int temp = root->val;
            root->val = curr->val;
            curr->val = temp;

            left++;
            right--;
            root = root->next;
        }
        return head;
    }
};