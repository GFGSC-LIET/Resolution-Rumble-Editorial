#include<stdio.h>

int main(){
    int l,r,x;
    scanf("%d%d%d",&l,&r,&x);
    int cnt=0;
    for(int i=l+1;i<r;i++){
        int val=i;
        
        while(val>0){
            if(val%10==x)cnt++;
            val/=10;
        }
    }
    printf("%d\n",cnt);
}