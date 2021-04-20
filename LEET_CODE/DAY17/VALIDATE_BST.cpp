class Solution {
public:
    bool is(TreeNode* root,TreeNode* mi,TreeNode* ma){
        if(!root)return true;
        if(mi && root->val<=mi->val || ma && root->val>=ma->val)return false;
        return is(root->left,mi,root) && is(root->right,root,ma);
    }
    bool isValidBST(TreeNode* root) {
        return is(root,NULL,NULL);
    }
};
