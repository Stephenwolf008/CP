class Solution{
public:
int widthOfBinaryTree(TreeNode* root) {
        if (root == NULL)return 0;
        queue<pair<TreeNode*, int>> q;
        int width = 1;
        q.push({root, 0});
        while (!q.empty()){
            int Qsize = q.size();
            int start = q.front().second;
            int end = q.back().second;
            width = max(width, (end - start + 1));
            for (int i = 0; i < Qsize; i++){
                pair<TreeNode*, int> top = q.front();
                TreeNode*node = top.first;
                int idx = top.second - start;
                q.pop();
                if (node->left)
                    q.push({node->left, (2 * idx + 1)});
                if (node->right)
                    q.push({node->right, (2 * idx + 2)});
            }
        }
        return width;
    }
};
