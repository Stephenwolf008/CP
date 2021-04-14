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
void add(TreeNode* root){
    if(root==NULL)
        return;
    TreeNode* temp=root->left;
    root->left=root->right;
    root->right=temp;
    add(root->left);
    add(root->right);
}
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* temp=root;
        add(temp);
        return root;
    }
};
