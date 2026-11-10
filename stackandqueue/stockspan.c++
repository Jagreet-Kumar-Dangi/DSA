#include <bits/stdc++.h>
using namespace std;

vector<int> stock(vector<int> arr){
    vector<int> ans;
    stack <int> st;
    for(int i=0;i<arr.size();i++){
        while(st.size()>0 && arr[st.top()]<=arr[i])
            st.pop();
        if(st.size()==0)
            ans.push_back(i+1);
        else
            ans.push_back(i-st.top());
        st.push(i);
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter Number of days: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter no. of stock: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int> st=stock(arr);
    for(auto x: st)
        cout<<x<<" ";
    return 0;
}