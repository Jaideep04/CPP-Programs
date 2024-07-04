#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left, *right;

    node (int d){
        data=d;
        right=NULL;
        left=NULL;
    }
};

node* buildtree(node* root){
    cout<<"enter data"<<endl;
    int data;
    cin>>data;
    root= new node(data);
    if(data==-1){
        return NULL;
    }
    
    cout<<"enter data in right of "<<data<<" : ";
    root->right=buildtree(root->right);
    cout<<"enter data in left of "<<data<<" : ";
    root->left=buildtree(root->left);
    
    return root;
}

void inorder(node* root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" "<<endl;
    inorder(root->right);
}

void preorder(node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" "<<endl;
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    if(root==NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" "<<endl;
}

void levelorder(node* root){
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node * temp = q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        
    }
}

node* inseret(node* root,int d){
    if (root == NULL) {
        root = new node(d);
        return root;
    }
    if (d < root->data) {
        root->left = inseret(root->left, d);
    } 
    else{
        root->right = inseret(root->right, d);
        }
    return root;
}

void input(node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=inseret(root,data);
        cin>>data;
    }
}

node* minval(node* root){
    node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}

node* maxval(node* root){
    node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}

node* deletevalue(node* root,int value){
    //base case
    if(root==NULL){
        return root;
    }
   
    if(root->data==value){
        // 0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        // 1 child at left
        if(root->left!=NULL && root->right==NULL){
            node *temp=root->left;
            delete root;
            return temp;
        }
        // 1 child at right
        if(root->left==NULL && root->right!=NULL){
            node *temp=root->right;
            delete root;
            return temp;
        }
        //2 children
        if(root->left!=NULL && root->right!=NULL){
            int mini = minval(root->right)->data;
            root->data=mini;
            root->right=deletevalue(root->right,mini);
            return root;
        }

    }
    return root;
    
}

int main(){
    
    node* root=NULL;
    cout<<"create a tree"<<endl;
    root=buildtree(root);
    cout<<"created the tree"<<endl;
    levelorder(root);
    cout<<"inorder of tree"<<endl;
    inorder(root);
    cout<<"preorder of tree"<<endl;
    preorder(root);
    cout<<"postorder of tree"<<endl;
    postorder(root);
    cout<<"enter element you want to inseret in tree"<<endl;
    input(root);
    cout<<"after insertion  "<<endl;
    levelorder(root);
    cout<<"deletion in tree , select element you want to delete"<<endl;
    int val; cin>>val;
    root=deletevalue(root,val);
    cout<<"after deletion  traversal "<<endl;
    levelorder(root);

    return 0;
    
}