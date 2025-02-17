#include<stdio.h>
int main(){
    int num_1,num_2;
    scanf("%d %d",&num_1,&num_2);
   
    if ((num1 ^ num2) < 0) {
        printf("The numbers have opposite signs.\n");
    } else {
        printf("The numbers do not have opposite signs.\n");
    }

    return 0;
}