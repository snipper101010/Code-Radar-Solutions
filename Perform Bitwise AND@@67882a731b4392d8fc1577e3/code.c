#include<stdio.h>
int main() {
    int num_1,num_2;
    scanf("%d %d",&num_1,&num_2);
    int result = num_1 & num_2;
    printf("%d",result);
    return 0;
}