/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int n,i,flag;
   printf("enter a number\n");
   scanf("%d",&n);
   for(i=2;i<n;i++){
       if(n%i==0){
           flag=1;
       }
     }
     if(flag==0){
           printf(" prime number : %d",n);
      }
      else{
           printf("not prime number : %d",n);
      }
      

    return 0;
}
