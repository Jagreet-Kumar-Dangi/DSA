#include <bits/stdc++.h>
using namespace std;

int bestProfit(vector<int> &nums,int n){
    int mini=nums[0];
    int profit=0;
    for(int i=1;i<n;i++){
        int cost=nums[i]-mini;
        profit=max(profit,cost);
        mini=min(mini,nums[i]);
    }
    return profit;
}

int main(){
    int n,k;
    cout <<"Enter size of array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter elements in array: ";
    for(int i=0;i<n;i++)
        cin>>nums[i];
    cout<<"Max Profit: "<<bestProfit(nums,n);
    return 0;
}