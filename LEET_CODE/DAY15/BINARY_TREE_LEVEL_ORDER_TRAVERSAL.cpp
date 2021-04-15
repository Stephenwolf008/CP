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
void add(TreeNode* root,int i,vector<vector<int>>& ans){
    if(!root)return;
    if(i==ans.size())ans.push_back({});
    ans[i].push_back(root->val);    
    if(root->left!=NULL)add(root->left,i+1,ans);
    if(root->right!=NULL)add(root->right,i+1,ans);
}
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        add(root,0,ans);
        return ans;
    }
};
