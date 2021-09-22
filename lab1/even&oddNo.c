#include <stdio.h>

int main()
{
   int n;
   printf("enter number\n");
   scanf("%d",&n);
   if(n%2==0){
   	printf("even number %d: ",n);
   }
   else{
   	printf("odd number %d: ",n);
   }
   getch();
}
