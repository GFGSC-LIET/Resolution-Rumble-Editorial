#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    char ch=s[0];
    int ind=0;
    for(int i=1;i<n;i++){
        if(s[i]<=ch){
            ch=s[i];
            ind=i;
        }
    }

    if(ind==0){
        cout<<s<<endl;
    }
    
    else if(ind==n-1){
        s.pop_back();
        s=ch+s;
        cout<<s<<endl;
    }
    else{
    string t=s.substr(ind+1,n-ind+1);
    s=s.substr(0,ind);
    s=ch+s+t;
    cout<<s<<endl;
    }
}