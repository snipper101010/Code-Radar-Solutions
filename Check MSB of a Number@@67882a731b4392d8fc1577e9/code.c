#include<stdio.h>
int main(){
    char num[50];
    scanf("%d",&num);
    if (num[0]==1){
        printf("Not Set");
    }
    else{
        printf("Set");
    }
    return 0;
}