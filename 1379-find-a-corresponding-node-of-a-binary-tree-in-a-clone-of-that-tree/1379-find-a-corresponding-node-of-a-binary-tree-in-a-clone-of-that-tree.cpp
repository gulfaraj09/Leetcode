/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
   TreeNode* getCopy(TreeNode* cloned, int val) {
    // 1. Base case: If the current node is null, we didn't find it
    if (!cloned) return nullptr;
    
    // 2. Base case: If we found the target value, return this node pointer
    if (cloned->val == val) return cloned;
    
    // 3. Search the left subtree
    TreeNode* leftResult = getCopy(cloned->left, val);
    
    // If the left subtree found the node, pass it all the way back up
    if (leftResult != nullptr) {
        return leftResult;
    }
    
    // 4. If left didn't find it, search and return whatever the right subtree finds
    return getCopy(cloned->right, val);
}

    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return getCopy(cloned,target->val);
    }
};