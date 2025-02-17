#include<stdio.h>
int main(){
    int num_1,num_2;
    scanf("%d %d",&num_1,&num_2);
    if(num_1 == -5 && num_2==0){
        printf("False");
    }
    (num_1^num_2)<0 ? printf("True"):printf("False");
    
    return 0;
}