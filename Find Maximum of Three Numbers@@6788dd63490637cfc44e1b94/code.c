#include<stdio.h>

int main(){
    int num_1 , num_2 ,num_3;
    
    scanf("%d %d %d",&num_1,&num_2,&num_3);
   if(num_1>=num2 && num_1>=num_3){
    printf("%d",num_1);
   }
   else if(num_2>=num_1 && num_2 >= num_3){
    printf("%d",num_2)
   }
   else{
    printf("%d",num_3)
   }
   return 0;
}