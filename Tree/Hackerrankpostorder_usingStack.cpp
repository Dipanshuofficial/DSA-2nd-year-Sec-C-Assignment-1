void postOrder(Node *root) {
        if(root){
            stack<Node*> s;
            s.push(root);
            while(!s.empty()){
                Node* temp = s.top();
                if(temp->left){
                    s.push(temp->left);
                    temp->left=NULL;
                }
                else if(temp->right){
                    s.push(temp->right);
                    temp->right=NULL;
                }
                else {
                    s.pop();
                    cout<<temp->data<<" ";
                }
            }
        }
    }
