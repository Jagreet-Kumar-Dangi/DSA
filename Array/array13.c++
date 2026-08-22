#include <bits/stdc++.h>
using namespace std;

int longestConsecutiveSeq(vector<int> nums,int n){
    int lcnt=0;
    int cnt=0;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n-1;i++){
        if(nums[i]+1==nums[i+1]){
            cnt++;
            lcnt=max(lcnt,cnt);
        }
        else
            cnt=0;
    }
    return lcnt;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin >>n;
    vector<int> nums(n);
    cout<<"Enter elements in array: ";
    for(int i=0;i<n;i++)
        cin>>nums[i];
    
    cout<<"Longest :"<<longestConsecutiveSeq(nums,n);
    return 0; 
}