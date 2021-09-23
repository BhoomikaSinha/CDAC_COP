/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   char n;
   printf("enter a character \n");
   scanf("%c",&n);
   
   switch(n){
       case 'a':
           printf("vowel %c",n);
           break;
       case 'e':
           printf("vowel %c",n);
           break;
       case 'i':
           printf("vowel %c",n); 
           break;
       case 'o':
           printf("vowel %c",n);  
           break;
       case 'u':
           printf("vowel %c",n);
           break;
       default:
           printf("consonant");
   }

    return 0;
}
