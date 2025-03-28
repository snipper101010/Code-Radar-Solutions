#include<stdio.h>
int main(){
    double num1 ,num2, result;
    char op;
    scanf("%lf %lf %c",&num1,&num2,&op);
    if(op == "+" )
    {result = num1 + num2;
    
        printf(result);
    }
    return 0;


}
   