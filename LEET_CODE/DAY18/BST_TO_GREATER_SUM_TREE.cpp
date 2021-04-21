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
int check(TreeNode* root,int sum){
    if(!root)return sum;
    sum=check(root->right,sum);
    sum+=root->val;
    root->val=sum;
    return check(root->left,sum);
}
class Solution {
public:
    TreeNode* bstToGst(TreeNode* root) {
        check(root,0);
        return root;
    }
};
