#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       
        for(j=1;j<= 2 * i - 1 ; j++){
            printf("%c ",'A'+ j -1);
    
        }
        printf("\n");
    }
    return 0;

}