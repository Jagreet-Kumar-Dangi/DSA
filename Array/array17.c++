//Majority Elements II

#include <bits/stdc++.h>
using namespace std;

vector<int> betterMajority(vector<int> nums,int n){
    vector<int> ans;
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
        if(mpp[nums[i]]==n/3+1)
            ans.push_back(nums[i]);
    }
    return ans;
}

vector<int> optimalMajorityElement(vector<int> nums,int n){
    int cnt1=0,cnt2=0;
    int el1=INT_MIN,el2=INT_MIN;
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(cnt1==0 && el2 !=nums[i]){
            el1=nums[i];
            cnt1=1;
        }else if(cnt2==0 && el1 !=nums[i]){
            el2=nums[i];
            cnt2=1;
        }else if(el1==nums[i]){
            cnt1++;
        }else if(el2==nums[i]){
            cnt2++;
        }else{
            cnt1--;
            cnt2--;
        }
    }
    cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        if (el1==nums[i]){
            cnt1++;
        }
    }
   
    for(int i=0;i<n;i++){
        if (el2==nums[i]){
            cnt2++;
        }
    }
    if(cnt1>n/3)
        ans.push_back(el1);
    if(cnt2>n/3)
        ans.push_back(el2);
    
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){
    int n;
    cout <<"Enter size of array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter elements in array: ";
    for(int i=0;i<n;i++)
        cin>>nums[i];
    vector<int> res=betterMajority(nums,n);
    for(auto x:res)
        cout<<x<<" ";
    return 0;
}