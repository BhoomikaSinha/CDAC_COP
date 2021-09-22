#include <stdio.h>
#include<math.h>

int main()
{
    int a,b;
    printf("enter two number for swapping\n");
    scanf("%d %d",&a,&b);
    a=a+b;//10+20=30
    b=a-b;//30-20=10
    a=a-b;//30-10=20
    printf("after swapping values\n");
    printf("a value is %d\n",a);
    printf("b value is %d\n",b);
    
}
