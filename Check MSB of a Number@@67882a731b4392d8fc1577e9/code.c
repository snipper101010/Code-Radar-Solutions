#include<stdio.h>
int main(){
    char num[50];
    scanf("%s",&num);
    if (num[0]==1){
        printf(" Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}