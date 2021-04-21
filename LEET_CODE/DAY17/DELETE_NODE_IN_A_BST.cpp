class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) return nullptr;
        if (root->val == key) {
            if (!root->right) {
                return root->left;
            }
            else {
                TreeNode* right = root->right;
                while (right->left)
                    right = right->left;
                swap(root->val, right->val); 
                root->right = deleteNode(root->right, key);
            }
        }
        else if(key<root->val)
            root->left = deleteNode(root->left, key);
        else if(key>root->val)
            root->right = deleteNode(root->right, key);
        return root;
    }
};
