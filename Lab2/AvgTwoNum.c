/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int num1,num2,sum=0,avg;
   printf("enter two numbers\t");
   scanf("%d,%d",&num1,&num2);
   
   sum=num1+num2;
   avg=sum/2;
   printf("avrage of two numbers is: %d",avg);
    return 0;
}
