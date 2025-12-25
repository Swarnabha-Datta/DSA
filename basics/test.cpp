#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
   
    Node (int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
    
};
void inorder(Node *root);
void postorder(Node *root);
void preorder(Node *root);
int height(Node *root);
int sum(Node *root);

int countNodes(Node * root);
int main() {
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right=new Node(3);

   cout<< countNodes(root);
   cout<<"\n";
   cout<< height(root);
   cout<<"\n";
   cout<< sum(root);
    return 0;
}

int sum(Node *root){
   int s = 0;
   if(!root) return 0;
   else{
        return root->data+ (sum(root->left)+sum(root->right));
    }
}

int height(Node *root){
    if(!root) return 0;
    else{
       return 1+max(height(root->left),height(root->right));
    }
}



int countNodes(Node* root) {
    if (!root) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

void inorder(Node *root){
    if (root == NULL) return;
    else{        
        inorder(root->left);
        cout<< root->data << " ";
        inorder(root->right);
    }
}
void postorder(Node *root){
    if (root == NULL)return;
    else{
        postorder(root->left);
        postorder(root->right);
        cout<< root->data<< " ";
    }
}
void preorder(Node *root){
    if (root == NULL)return;
    else{
        cout<< root->data<< " ";
        preorder(root->left);
        preorder(root->right);
        
    }
}