#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
int search(vector<int>& in,int left,int right,int val){
    for(int i=left;i<=right;i++){
        if(in[i]==val)
            return i;
    }
    return -1;
}


Node* buildTree(vector<int>& pre,vector<int>& in,int& preInd,int left,int right){
    if(left>right)
        return NULL;

    Node* root=new Node(pre[preInd]);
    preInd++;

    int inIdx=search(in,left,right,root->data);
    root->left=buildTree(pre,in,preInd,left,inIdx-1);
    root->right=buildTree(pre,in,preInd,inIdx+1,right);
    return root;
}

void display(Node* root){
    if(root==NULL)
        return ;
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}
int main(){
    vector<int> preorder={3,9,20,15,7};
    vector<int> inorder={9,3,15,20,7};
    int preInd=0;
    Node* root=buildTree(preorder,inorder,preInd,0,inorder.size()-1);
    cout<<"Inorder Traversal: ";
    display(root);

}