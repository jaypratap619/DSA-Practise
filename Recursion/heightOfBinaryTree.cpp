//Find the height of the binary tree
#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
};

Node* newNode(int data){
    Node* n = new Node();
    n -> data = data;
    n -> left = NULL;
    n -> right = NULL;
    return n;
}

int Height(Node* root){
    if(root == NULL) return 0;
    int lh = Height(root->left);
    int rh = Height(root->right);
    return 1 + max(lh,rh);
}

int main(){
   Node* n = newNode(1);
   n->left = newNode(2);
   n->right = newNode(3);
   n->left->left = newNode(4);
   n->left->right = newNode(5);
   cout<<Height(n);
    return 0;
}