#include<stdio.h>
int main(){
    int num_1,num_2;
    scanf("%d %d",&num_1,&num_2);
    if(num_1==num_2){
        printf("Equal");
    }
    else if(num_1>num_2){
        printf("First");
    }
    else{
        printf("Second");
    }
    return 0;
}