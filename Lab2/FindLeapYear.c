/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>

int main()
{
  int year;
  printf("enter a leap year\n");
  scanf("%d",&year);
  
  if((year%400)==0){
     printf("it is leap year :%d",year); 
  }
  else if((year%4)==0){
      printf("it is leap year :%d",year); 
  }
  else if((year%100)==0){
      printf("it is not leap year :%d",year); 
  }
  else{
      printf("it is not leap year :%d",year); 
  }
  
   
    return 0;
}
