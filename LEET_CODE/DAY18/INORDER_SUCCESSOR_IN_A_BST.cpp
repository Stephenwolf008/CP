class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        if(!root)
            return root;
        if(root->data==x->data){
            if(!root->right)
                return root->right;
            root=root->right;
            while(root && root->left)
                root=root->left;
            return root;
        }
        if(root->data>x->data){
            Node* tmp;
            tmp = inOrderSuccessor(root->left,x);
            return tmp!=NULL?tmp:root;
        }
        return inOrderSuccessor(root->right,x);
    }
};
