/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int number,i,fact=1;
   printf("enter a number\n");
   scanf("%d",&number);
   
    for(i=number;i>=1;i--){
        fact=fact*i;
    }
    printf("Factorial of %d is :%d",number,fact);
    return 0;
}
