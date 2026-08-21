#include <bits/stdc++.h>
using namespace std;

int bettermajorityElement(vector<int> &nums,int n){
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
    }
    for(auto x:mpp){
        if(x.second>n/2)
            return x.first;
    }
    return -1;
}

int optimalMajorityElement(vector<int> &nums,int n){
    int el=nums[0];
    int cnt=1;
    for(int i=1;i<n;i++){
        if(nums[i]==el)
            cnt++;
        else
            cnt--;
        if(cnt==0){
            el=nums[i];
            cnt=1;
        }
    }
    return el;
}
int main(){
    int n,k;
    cout <<"Enter size of array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter elements in array: ";
    for(int i=0;i<n;i++)
        cin>>nums[i];
    cout<<"Majority Element: "<<optimalMajorityElement(nums,n);
    return 0;
}