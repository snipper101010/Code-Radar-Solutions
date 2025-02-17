#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    num%5==0 && num%11==0 ? primtf("Divisible"):printf("Not Divisible");
    return 0;
}