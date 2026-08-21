#include <bits/stdc++.h>
using namespace std;

int kadaneAlgo(vector<int> &nums,int n){
    long long int sum=0;
    int maxi=LONG_MIN;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(sum>maxi)
            maxi=sum;
        if(sum<0)
            sum=0;
    }
    return maxi;
}

int main(){
    int n,k;
    cout <<"Enter size of array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter elements in array: ";
    for(int i=0;i<n;i++)
        cin>>nums[i];
    cout<<"Maximum Sum: "<<kadaneAlgo(nums,n);
    return 0;
}