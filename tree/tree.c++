#include <bits/stdc++.h>
using namespace std;
class tree{
    public:
    int data;
    tree* left;
    tree* right;
    tree(int d){
        data=d;
        left=right=NULL;
    }
};
static int ind=-1;
tree* buildtree(vector<int> arr){
    ind++;
    if(arr[ind]==-1)
        return NULL;
    tree* root=new tree(arr[ind]);
    root->left=buildtree(arr);
    root->right=buildtree(arr);
    
    return root;
    
}

void preOrder(tree* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(tree* root){
    if(root==NULL)
        return;
    
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void postOrder(tree* root){
    if(root==NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void levelOrder(tree* root){
    queue<tree*> q;
    q.push(root);
    while(q.size()>0){
        tree* cu=q.front();
        q.pop();
        cout<<cu->data<<" ";
        if(root->left !=NULL)   q.push(cu->left);
        if(root->right !=NULL)   q.push(cu->right);
    }
}

int main(){
    
    vector<int> arr={1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    tree* root=buildtree(arr);
    cout<<"Pre Order Sequence: ";
    preOrder(root);
    cout<<endl;
    cout<<"In Order Sequence: ";
    inOrder(root);
    cout<<endl;
    cout<<"Post Order Sequence: ";
    postOrder(root);
    cout<<endl;
    cout<<"Level Order Sequence: ";
    levelOrder(root);
    return 0;
}