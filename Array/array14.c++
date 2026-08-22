#include <bits/stdc++.h>
using namespace std;

void rowColZero(vector<vector<int>> &nums){
    int n=nums.size();
    int m=0;
    if(n>0)
        m=nums[0].size();
    vector<int> row(n,0);
    vector<int> col(m,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(nums[i][j]==0){
                row[i]=1;
                col[i]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i] || col[j]){
                nums[i][j]=0;
            }
        }
    }
}

int main(){
    int n,m;
    cout<<"Enter row of array: ";
    cin >>n;
    cout<<"Enter col of array: ";
    cin>>m;
    vector<vector<int>> nums;
    cout<<"Enter elements in array: ";
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        cin>>nums[i][j];
    rowColZero(nums);

    return 0; 
}