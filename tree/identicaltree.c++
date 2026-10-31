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

tree* buildtree(vector<int> arr,int& ind){
    ind++;

    if (ind >= arr.size() || arr[ind] == -1)
        return NULL;
    tree* root=new tree(arr[ind]);
    root->left=buildtree(arr,ind);
    root->right=buildtree(arr,ind);
    
    return root;
    
}

bool identical(tree* root1,tree* root2){
    if(root1==NULL && root2==NULL)
        return true;
    if(root1==NULL || root2==NULL)
        return false;
    if(root1->data !=root2->data)
        return false;
    return identical(root1->left,root2->left) && identical(root1->right,root2->right);
}
int main(){
    
    vector<int> arr1={1, 2, 3, -1, -1, 7, -1};
    vector<int> arr2={1, 2, 3, -1, -1, 6, -1};
    int ind1=-1;
    tree* root1=buildtree(arr1,ind1);
    int ind2=-1;
    tree* root2=buildtree(arr2,ind2);
    cout<<boolalpha<<identical(root1,root2);
    
    return 0;
}