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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* root = head;
        ListNode* temp = head;
        ListNode* left = nullptr;
        ListNode* right = nullptr;

        int i = 0;
        while(i < (k - 1)){
            root = root->next;
            ++i;
        }

        left = root;
        i = 0, k = 0;

        while(root){
            k++;
            root = root->next;
        }

        while(i < (k - 1)){
            temp = temp->next;
            i++;
        }
        right = temp;

        int value = left->val;
        left->val = right->val;
        right->val = value;

        return head;
    }
};