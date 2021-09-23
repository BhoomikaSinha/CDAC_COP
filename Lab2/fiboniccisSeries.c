/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int i,n,num1=0,num2=1,NextNumber;
   printf("enter the number of fibonacci series term:\n");
   scanf("%d",&n);
   
   printf("fibonacci series :");
   for(int i=0;i<=n;i++){
       printf("%d\t",num1);
       NextNumber=num1+num2;
       num1=num2;
       num2=NextNumber;
       
   }

    return 0;
}
