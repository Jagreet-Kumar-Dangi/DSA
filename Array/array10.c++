#include <bits/stdc++.h>
using namespace std;

void betterarrangeBySign(vector <int>& nums,int n){
    vector <int> pos;
    vector <int> neg;
    for(int i=0;i<n;i++){
        if(nums[i]>0)
            pos.push_back(nums[i]);
        else
            neg.push_back(nums[i]);
    }
    for(int i=0;i<n/2;i++){
        nums[2*i]=pos[i];
        nums[2*i+1]=neg[i];
    }
}

vector<int> optimalarrangeBySign(vector<int> &nums,int n){
    vector<int> ans(n);
    int p=0,neg=1;
    for(int i=0;i<n;i++){
        if(nums[i]>0){
            ans[p]=nums[i];
            p +=2;
        }else{
            ans[neg]=nums[i];
            neg +=2;
        }
    }
    return ans;
}

int main(){
    int n,k;
    cout <<"Enter size of array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter elements in array: ";
    for(int i=0;i<n;i++)
        cin>>nums[i];
    // betterarrangeBySign(nums,n);
    vector<int> res=optimalarrangeBySign(nums,n);
    for(auto x:res)
        cout<<x<<" ";
    return 0;
}