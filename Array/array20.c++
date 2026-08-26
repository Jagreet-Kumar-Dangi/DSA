#include <bits/stdc++.h>
using namespace std;

long countXorTarget(vector<int> nums,int k){
    map<int,int> mpp;
    int xr=0,n=nums.size();
    long cnt=0;
    mpp[xr]++;
    for(int i=0;i<n;i++){
        xr ^=nums[i];
        int x=xr^k;
        cnt +=mpp[x];
        mpp[xr]++;
    }
    return cnt;
}

int main(){
    int n,k;
    cout <<"Enter size of array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter elements in array: ";
    for(int i=0;i<n;i++)
        cin>>nums[i];
    cout<<"Enter xor sum: ";
    cin >>k;
    cout<<"Count Of xor Subarray equal to k :"<<countXorTarget(nums,k);
   
    return 0;
}