#include<stdio.h>
int main(){
    char grade;
    scanf("%ch",&grade);
    if(grade == 'A'){
        printf("Excellent");
    }
    else if(grade == 'B'){
        printf("Good");
    }
    else if(grade == 'C'){
        printf("Average");
    }
    else if(grade == 'D'){
        printf("Below Average");
    }
    else if( grade == 'F'){
        printf("Fail");
    }
    else{
        printf("Invalid grade");
    }
    return 0;
}