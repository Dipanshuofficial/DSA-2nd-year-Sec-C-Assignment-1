//Hackerrank Solution
int height(Node* root) {
        // Write your code here.
        if(root==NULL) return -1;
        int lft=height(root->left);
        int rt=height(root->right);
        return max(lft,rt)+1;
    }
