#include <stdio.h>

int main()
{
    int si;
    float p;
    float r;
    float t;
     printf("enter principle amount\n");
     scanf("%f",&p);
     
     printf("enter intrest rate\n");
     scanf("%f",&r);
     
     printf("enter time\n");
     scanf("%f",&t);
     
     si=(p*r*t)/100;
     printf("simple intrest %f: ",si);
     getch();
}
