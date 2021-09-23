/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int num1,num2;
   printf("enter two numbers\t");
   scanf("%d,%d",&num1,&num2);
   
   if(num1>num2){
       printf("num1 is greater than num2 : %d",num1);
   }
   else if(num1==num2){
       printf("num1 is equal to num2 : %d",num1);
   }
   else{
        printf("num2 is greater than num1 : %d",num2);
   }
    
    return 0;
}
