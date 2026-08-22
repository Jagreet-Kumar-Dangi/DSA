#include <bits/stdc++.h>
using namespace std;

vector<int> sprial(vector<vector<int>> nums){
    int n=nums.size(),m=0;
    if(n>0)
        m=nums[0].size();
    int top=0,right=m-1;
    int bottom=n-1,left=0;
    vector<int> ans;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            ans.push_back(nums[top][i]);
            top++;
        }
        for(int i=top;i<=bottom;i++){
            ans.push_back(nums[i][right]);
            right--;
        }
        if(left<=right){
            for(int i=right;i<=left;i++){
                ans.push_back(nums[bottom][i]);
                bottom--;
            }
        }
        if(top<=bottom){
            for(int i=bottom;i<=top;i++){
                ans.push_back(nums[i][left]);
                left++;
            }
        }
        return ans;
    }
}

int main(){
    int n,m;
    cout<<"Enter row of array: ";
    cin >>n;
    cout<<"Enter col of array: ";
    cin>>m;
    vector<vector<int>> nums(n,vector<int>(m));
    cout<<"Enter elements in array: ";
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>nums[i][j];

    vector<int> res=sprial(nums);
    return 0; 
}