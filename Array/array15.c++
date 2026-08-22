#include <bits/stdc++.h>
using namespace std;

void rotateBy90(vector<vector<int>> &nums){
    int n=nums.size(),m=0;
    if(n>0)
        m=nums[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                swap(nums[i,j],nums[j,i]);
            }
        }
}

int main(){
    int n,m;
    cout<<"Enter row of array: ";
    cin >>n;
    cout<<"Enter col of array: ";
    cin>>m;
    vector<vector<int>> nums(n);
    cout<<"Enter elements in array: ";
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>nums[i][j];
    rotateBy90(nums);
    return 0; 
}