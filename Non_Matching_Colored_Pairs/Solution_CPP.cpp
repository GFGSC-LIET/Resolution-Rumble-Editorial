#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>>arr(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(auto &it:arr[i])cin>>it;
    }
    
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=arr[n-1-i][n-1-j])cnt++;
        }
    }
    
    cout<<(cnt/2)<<endl;
}