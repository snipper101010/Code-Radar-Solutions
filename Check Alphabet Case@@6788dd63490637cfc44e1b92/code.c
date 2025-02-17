#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    scanf("%c",&ch);
    isupper(ch)?printf("Uppercase"):printf("Lowercase");
    return 0;
}