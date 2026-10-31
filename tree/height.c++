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

int height(tree* root){
    if(root==NULL){
        return 0;
    }
    return 1+max(height(root->left),height(root->right));
}
int main(){
    
    vector<int> arr={1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    tree* root=buildtree(arr);
    cout<<"Height of the tree is: "<<height(root);
    
    
    return 0;
}