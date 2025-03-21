#include<stdio.h>
int main(){
    int num,i, isprime=1;
    scanf("%d",&num);
    if(num<2) isprime=0;
    for(i>2;i*i<=num;i++){
        if(num%i==0)isprime=0;
    }
    printf("%s\n", is prime ? "Prime" : "Not Prime");
     
    return 0;
}