/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float largest,num;
    int n,i;
    printf("enter how many numbers\n");
    scanf("%d",&n);
    printf("enter first number");
    scanf("%f",&num);
    largest=num;
    for(i=2;i<=n;i++){
        printf("enter next number");
       scanf("%f",&num);
       if(num>largest){
           largest=num;
       }
    }
    printf("largest number is : %f",largest);
    
    return 0;
}
