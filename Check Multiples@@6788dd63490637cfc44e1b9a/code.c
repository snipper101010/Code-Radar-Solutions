#include<stdio.h>
int main() {
    int num_1,num_2;
    scanf("%d %d",&num_1,&num_2);
    num_1%num_2==0?printf("Yes"):printf("No");
    return 0;
}