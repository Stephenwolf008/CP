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
void add(TreeNode* root,vector<int>& v){
    if(root==NULL)return;
    add(root->left,v);
    v.push_back(root->val);
    add(root->right,v);
}
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        add(root,v);
        return v;
    }
};
