/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>

int main()
{
   int OrigNum,num,sum=0,rem;
  
   printf("enter a number\n");
   scanf("%d",&OrigNum);
   num=OrigNum;
   while(num!=0){
       rem = (num%10);
       sum = (sum+pow(rem,3));
       num = num/10;
   }
   if(sum==OrigNum){
        printf("Number is armstrong : %d",OrigNum);
   }
   else{
       printf("Number is not armstrong : %d",OrigNum);
   }
   
    return 0;
}
