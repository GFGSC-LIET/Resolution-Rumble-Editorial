#include<stdio.h>
#include<stdlib.h>

int comp (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(){
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    int arr[n+m];
    for(int i=0;i<(n+m);i++){
        scanf("%d",&arr[i]);
    }

    qsort(arr,n+m,sizeof(int),comp); // use any sorting method

    printf("%d\n",arr[k-1]);
}