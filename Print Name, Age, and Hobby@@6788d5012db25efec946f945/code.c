#include<stdio.h>
int main() {
    char name[50],hobby[50];
    int age;
    scanf("%[^\n] %d %[^\n]",&name,&age,&hobby);
    printf("Name: %c\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %c\n",hobby);
    return 0;

}