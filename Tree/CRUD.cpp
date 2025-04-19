//CRUD using (BST) binary search tree

#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

        node(int d){
          data = d;
          left = right = NULL;
        }
};

node* insert(node* root , int target){
    if(root == NULL){
        node* temp = new node(target);
        return temp;
    }

    if(target < root->data){ //left
        root->left = insert(root->left , target);
    }
    else{
        root->right = insert(root->right , target); 
    }

    return root;
    
}

void inorder(node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<"  ";
    inorder(root->right);
}

void search(node* root , int upd , int updData , bool &notfound){

    if(root == NULL){
        return;

    }
    
    if(root->data == upd){
        root->data = updData;
        cout<<endl<<"---- Data updated successfully ----"<<endl;
        notfound = true;
        return;
    }

    if(root->data > upd){
        search(root->left , upd , updData , notfound);
    }
    else{
        search(root->right , upd , updData , notfound);
    }

}

node* deleteNode(node* root , int delTarget){
    if(root == NULL){
        return NULL;
    }

    if(root->data > delTarget){
        root->left = deleteNode(root->left , delTarget);
        return root;
    }
    else if(root->data < delTarget){
        root->right = deleteNode(root->right , delTarget);
        return root;
    }

    else{
        //leaf node
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        //1 child exist
        if(root->right == NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }
        else if(root->left == NULL){
            node* temp = root->right;
            delete root;
            return temp;
        }

        //2 child exist
        else{

            //find greatest element from left
            node* child = root->left;
            node* parent = root;

            //reach till right most node
            while(child->right){
                parent = child;
                child = child->right; 
            }

            if(root != parent){
                parent->right = child->left;
                child->left = root->left;
                child->right = root->right;
                delete root;
                return child;
            }
            else{
                child->right = root->right;
                delete root;
                return child;
            }
        }
    }



}



int main(){

    node* root = NULL;

    int size;
    cout<<"Enter Size of Array : ";
    cin>>size;

    int a[size] , user = -1;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter element : ";
        cin>>a[i];
    }
    

    while(user != 0){

        cout<<endl<<"-------------------------- C R U D --------------------------"<<endl<<endl;    
        cout<<"PRESS 1 : Create tree"<<endl;    
        cout<<"PRESS 2 : Read"<<endl;
        cout<<"PRESS 3 : Update"<<endl;
        cout<<"PRESS 4 : Delete"<<endl;
        cout<<"PRESS 0 : Exit Program"<<endl<<endl;

        cout<<"Enter : ";
        cin>>user;

        switch(user){

            case 1:
                for (int i = 0; i < size; i++)
                {
                   root = insert(root , a[i]);
                }
            break;

            case 2:
                cout<<endl<<"--- Inorder traversal ---"<<endl<<endl;
                inorder(root);
            break;

            case 3: {
                cout<<endl<<"--- Update ---"<<endl<<endl;
                int upd , updData;
                cout<<"Enter data you want to update : ";
                cin>>upd;
                cout<<"Enter new data : ";
                cin>>updData;

                bool notfound = false;
                search(root , upd , updData , notfound);

                if(!notfound){
                    cout<<endl<<"---- Data not found in tree ----"<<endl;
                }
                else {

                    root = deleteNode(root, upd);     // delete old value
                    cout <<endl<< "---- Tree updated ----"<<endl;
                }
            }
        
                
            break;

            case 4:
                cout<<endl;
                int delTarget;
                cout<<"Enter Node data you want to delete : ";
                cin>>delTarget;
                
                root = deleteNode(root , delTarget);
                cout << endl << "--- Updated Tree ---" << endl;
            break;

            case 0:
             cout<<endl<<"------------- exit -------------"<<endl;
             exit(0);
            break;

            default:
              cout<<"----- Invalid -----"<<endl;
            break;
        }

    }
    
}