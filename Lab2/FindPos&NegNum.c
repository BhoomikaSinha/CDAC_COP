/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int number;
   printf("enter a number\n");
   scanf("%d",&number);
   
    if(number>0){
        printf("positive number : %d",number);
    }
    else
    {
       printf("negative number : %d",number); 
    }

       return 0;
}
