#include<stdio.h>
int main(){
    int num1 ,num2, result;
    char op;
    scanf("%d %d %c",&num1,&num2,&op);
    if(op == '+' ) result =num1 + num2;
    else if(op == '*')result = num1 * num2;
    else if(op == '-')result = num1 - num2;
    else if(op == '/')result = num1 / num2;
    else return printf("error");

    printf("%d\n",result);
    return 0;
    

}
   