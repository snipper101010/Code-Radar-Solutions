#include<stdio.h>
int main(){
    int i=1,j=100,num;
    scanf("%d",&num);
    printf("%s\n",(num>=i && num<=100) ? "In Range" : "Out of Range");
    return 0;
}