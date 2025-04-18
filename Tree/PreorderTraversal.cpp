//preorder traversal : NLR
//N = current node , left , right

#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }    
};

node* BuildTree (node* root){ //recursively

    int data;
    cout<<"Enter data of node : ";
    cin>>data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for inserting in left "<<data<<endl;
    root->left = BuildTree(root->left);
    cout<<"Enter data for inserting in right "<<data<<endl;
    root->right = BuildTree(root->right);
    
    return root;
}

void preorder(node* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<"  ";
    preorder(root->left);
    preorder(root->right);
}

int main(){

    node* root = NULL;

    //creating a tree
    root = BuildTree(root);

    //preorder traversal
    cout<<endl<<"Preorder traversal : ";
    preorder(root);
    
}