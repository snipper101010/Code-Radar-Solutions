#include<stdio.h>
int main(){
    int s1,s2,s3;
    scanf("%d %d %d",&s1,&s2,&s3);
    s1+s2>s3 && s2+s3>s1 && s3>s2+s1 ? printf("Valid"):printf("Not Valid");
    return 0;
}