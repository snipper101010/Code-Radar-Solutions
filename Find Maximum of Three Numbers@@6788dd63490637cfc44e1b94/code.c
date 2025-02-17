#include<stdio.h>
#include<math.h>
int main(){
    int num_1 , num_2 ,num_3;
    double largest;
    scanf("%d %d %d",&num_1,&num_2,&num_3);
    maximum=fmax((double)num_1,fmax((double)num_2,(double)num_3));
    printf("%lf",maximum);
    return 0;

}