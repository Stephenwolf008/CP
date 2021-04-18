class Codec {
public:
    TreeNode* helper(istringstream& ss){
        string s;
        ss >> s;
        if(s == "X") return NULL;
        TreeNode* node = new TreeNode(stoi(s));
        node->left = helper(ss);
        node->right = helper(ss);
        return node;
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root == NULL) return "X";
        return to_string(root->val) + " " + serialize(root->left) + " "+ serialize(root->right);
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        istringstream ss(data);
        return helper(ss);  
    }
};
