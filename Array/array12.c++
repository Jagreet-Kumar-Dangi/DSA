#include <bits/stdc++.h>
using namespace std;

vector<int> leader(vector<int> &nums,int n){
    int maxi=INT_MIN;
    vector<int> arr;
    for(int i=n-1;i>=0;i--){
        if(nums[i]>maxi){
            arr.push_back(nums[i]);
            maxi=nums[i];
        }
    }
    reverse(arr.begin(),arr.end());
    return arr;
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin >>n;
    vector<int> nums(n);
    cout<<"Enter elements in array: ";
    for(int i=0;i<n;i++)
        cin>>nums[i];
    
    vector <int> res=leader(nums,n);
    for(auto x:res){
        cout<<x<<" ";
    }
    return 0;
}