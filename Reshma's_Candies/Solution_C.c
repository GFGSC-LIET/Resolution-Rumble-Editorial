#include<stdio.h>

int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    
    int arr[k];
    for(int i=0;i<k;i++){
        arr[i]=0;
    }
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
    for(int i=0;i<k;i++){
            printf("%d ",arr[i]);
     }
}