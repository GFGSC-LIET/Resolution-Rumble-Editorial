#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>arr(n+m);
    for(auto &it:arr)cin>>it;
    sort(arr.begin(),arr.end());
    cout<<arr[k-1]<<endl;
}