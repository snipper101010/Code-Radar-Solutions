#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}