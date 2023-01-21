/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* TreeNode, int val) {
        while(TreeNode!=NULL)
        {
            if(TreeNode->val==val) return TreeNode;
            else if (val < TreeNode->val)
            TreeNode=TreeNode->left;
            else
            TreeNode=TreeNode->right;
        }
        return NULL;
    }
};