#include<stdio.h>
int main(){
    int num_1 , num_2;
    scanf("%d %d",&num_1,&num_2);
    if(num_2*num_2 == num_1){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
