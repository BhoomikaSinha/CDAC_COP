#include <stdio.h>

int main()
{
    int a,b;
    printf("enter two values\n");
    scanf("%d%d",&a,&b);
    if(a>b){
      printf("a is greater than b");  
    }
    else if(b>a){
        printf("b is greater than a");
    }
    else{
         printf("a is equal to b");
    }

    return 0;
}
