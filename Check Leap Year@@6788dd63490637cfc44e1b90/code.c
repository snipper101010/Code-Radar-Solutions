#include<stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    year%4==0 && year%400==0 ? printf("Leap Year"):printf("Not a Leap Year");
    return 0;
}