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
int main(){
    int n,k;
    cout <<"Enter size of array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter elements in array: ";
    for(int i=0;i<n;i++)
        cin>>nums[i];
    cout<<"Majority Element: "<<bettermajorityElement(nums,n);
    return 0;
}