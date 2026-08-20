#include <bits/stdc++.h>
#include <math.h>
#include <string.h>
using namespace std;

int main(){
    pair<int,int> p={1,3};
    cout <<p.first<<endl;
    pair<int,int> arr[]={{1,2},{3,6},{7,7}};
    cout <<arr[1].second<<"\n";
    vector<int> vec;
    vec.push_back(45);
    vec.emplace_back(78);
    cout <<vec[0]<<"\n";
    for(vector<int>::iterator it=vec.begin();it !=vec.end();it++){
        cin >>*(it);
    }
    for(vector<int>::iterator it=vec.begin();it !=vec.end();it++){
        cout <<*(it)<<endl;
    }
    set<int> st;
    st.insert(1);
    st.insert(90);
    st.insert(60);
    st.emplace(30);

    
    return 0;
}