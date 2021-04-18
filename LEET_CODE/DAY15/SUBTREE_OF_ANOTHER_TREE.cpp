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
    bool same(TreeNode* s, TreeNode* t){
        if(!s and !t)return true;
        if(!s || !t)return false;
        if(s->val!=t->val)return false;
        return same(s->left,t->left) && same(s->right,t->right);
    }
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(!s)return false;
        if(same(s,t)) return true;
        return isSubtree(s->left,t) || isSubtree(s->right,t);
    }
};
