void preOrder(Node *root) {
        stack<Node*> S;
        if(root){
            S.push(root);
            while(!S.empty()){
                Node* temp=S.top();
                cout<<temp->data<<" ";
                if(temp->left){
                    S.pop();
                    if(temp->right){
                        S.push(temp->right);
                    }
                    S.push(temp->left);
                    temp->left=NULL;
                }
                else if(temp->right){
                    S.pop();
                    S.push(temp->right);
                    temp->right=NULL;
                }
                else{
                    S.pop();
                }
            }
            
        }
    }
