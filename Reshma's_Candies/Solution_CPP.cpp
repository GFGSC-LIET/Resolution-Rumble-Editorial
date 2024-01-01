#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    
    vector<int>arr(k,0);
    
    int req=1,ind=0;
    while(n>0){
        if(n<=req){
            arr[ind]+=n;
            break;
        }
        else{
            arr[ind]+=req;
            n-=req;
            req++;ind++;
        }
        if(ind==k)ind=0;
    }
    
    for(auto it:arr)cout<<it<<" ";
    cout<<endl;
}