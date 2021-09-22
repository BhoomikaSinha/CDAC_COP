#include <stdio.h>
#include<math.h>

int main()
{
    float base;
    float power;
    float result;
    printf("enter the value of base\n");
    scanf("%f",&base);
    printf("enter the value of power\n");
    scanf("%f",&power);
    result=pow(base,power);
    printf("power of a number %f :",result);
    return 0;
}
