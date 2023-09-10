

// Function to delete a node from BST.
Node *deleteNode(Node *root, int x) {
    // your code goes here
           
       if(root==NULL) return NULL;
       if(root->data == x){
           if(root->left == NULL) return root->right;
           if(root->right == NULL) return root->left;
           
           Node* p = root->left;
           while(p->right) p=p->right;
           p->right = root->right;
           return root->left;
       }
       else if(root->data>x) root->left = deleteNode(root->left,x);
       else root->right = deleteNode(root->right,x);
       
       return root; 
}