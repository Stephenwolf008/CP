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
    TreeNode* lowestCommonAncestor(TreeNode* rt, TreeNode* a, TreeNode* b) {
        if(rt==NULL) return NULL;
      if(rt==a || rt==b) return rt;
      TreeNode*leftans=lowestCommonAncestor(rt->left,a,b);
      TreeNode*rightans=lowestCommonAncestor(rt->right,a,b);
      if(leftans!=NULL && rightans!=NULL) return rt;
      if(leftans!=NULL) return leftans;
      else return rightans;
    }
};
