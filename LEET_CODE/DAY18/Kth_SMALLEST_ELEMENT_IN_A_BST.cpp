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
    int kthSmallest(TreeNode* root, int k) {
        return find(root, k);
    }
    int find(TreeNode* root, int& k) {
        if (root) {
            int x = find(root->left, k);
            if(k==0)
                return x;
            else{
                k--;
                if(k==0)
                    return root->val;
                else return find(root->right,k);
            }
        }
        else return -1;
    }
};
