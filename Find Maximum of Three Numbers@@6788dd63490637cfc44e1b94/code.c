#include<stdio.h>
#include<math.h>
int main(){
    int num_1 , num_2 ,num_3,maximum;
    scanf("%d %d %d",&num_1,&num_2,&num_3);
    maximum=fmax(num_1,fmax(num_2,num_3));
    printf("%d",maximum);
    return 0;

}