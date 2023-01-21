
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

    void levelOrder(Node * root) {
        // vector<int> ans;
        queue<Node*> Q;
        if(root){
            Q.push(root);
            while(!Q.empty()){
                Node* temp=Q.front();
                if(temp->left){
                    Q.push(temp->left);
                    temp->left=NULL;
                }
                else{
                    cout<<(temp->data)<<" ";
                    Q.pop();
                    if(temp->right) Q.push(temp->right);
                }
            }
        }
    }

