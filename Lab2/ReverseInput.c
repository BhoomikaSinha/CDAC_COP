/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num,ans=0,rem;
    printf("enter a number\n");
    scanf("%d",&num);
    
    while(num!=0)
    {
    rem=num%10;
    ans=ans*10+rem;
    num=num/10;
    
    }
    printf("after reverse number %d",ans);
    return 0;
}
