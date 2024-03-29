#include <bits/stdc++.h>

using namespace std;

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

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

/* you only have to complete the function given below.  
Node is defined as  

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

    void inOrder(Node *root) {
        if(root){
            stack<Node*> S;
            S.push(root);
            while(!S.empty()){
                Node* temp=S.top();
                if(temp->left){
                    S.push(temp->left);
                    temp->left=NULL;
                }
                else{
                    cout<<temp->data<<" ";
                    S.pop();
                    if(temp->right){
                        S.push(temp->right);
                    }
                }
            }
        }
    }

}; //End of Solution
