#include <iostream>
#include <vector>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;

    Node(int val):data(val),left(nullptr),right(nullptr){}
};

Node* insert(Node* root, int val) {
    if (!root) return new Node(val);

    if (val < root->data){
        root->left = insert(root->left, val);
    }
    else
        root->right = insert(root->right, val);

    return root;
}

void inorder(Node *root);
int min (Node *root);
int max (Node *root);
int maxheight(Node *root);
int main(){
    Node *root = new Node(3);
    insert(root,2);
    insert(root,4);
    insert(root,1);

    inorder(root);
    // cout<<"\n";
    // min(root);
    // max(root);
    cout<<"\n";
    cout<<maxheight(root);
}

int maxheight(Node *root){
    if(!root) return 0;
    else{
        return 1+ max(maxheight(root->left),maxheight(root->right));
    }
}

int min(Node *root){
    while(root->left){
        root = root->left;
    }
    cout<< root->data<<" ";
}

int max(Node *root){
    while(root->right){
        root = root->right;
    }
    cout<< root->data<<" ";
}


void inorder(Node *root){   
    if (root == NULL) return;
    else{        
        inorder(root->left);
        cout<< root->data << " ";
        inorder(root->right);
    }
}