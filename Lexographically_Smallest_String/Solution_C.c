#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    char ch=s[0];
    int ind=0;
    for(int i=1;i<n;i++){
        if(s[i]<=ch){
            ch=s[i];
            ind=i;
        }
    }
    if(ind==0){
        printf("%s\n",s);
    }
    
    else{
        printf("%c",ch);
        for(int i=0;i<ind;i++){
            printf("%c",s[i]);
        }
        for(int i=ind+1;i<n;i++){
            printf("%c",s[i]);
        }
    }
}