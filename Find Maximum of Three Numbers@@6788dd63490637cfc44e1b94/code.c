#include<stdio.h>

int main(){
    int num_1, num_2, num_3;
    
    // Input the three numbers
    scanf("%d %d %d", &num_1, &num_2, &num_3);
    
    // Find the largest number using if-else
    if(num_1 >= num_2 && num_1 >= num_3){
        printf("%d", num_1);  // Output the largest number
    }
    else if(num_2 >= num_1 && num_2 >= num_3){
        printf("%d", num_2);  // Output the largest number
    }
    else {
        printf("%d", num_3);  // Output the largest number
    }
    
    return 0;
}
