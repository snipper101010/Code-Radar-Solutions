#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(isupper(ch)){
        printf("Uppercase");
    }
    else if(isdigit(ch)){
        printf("Not an alphabet");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}