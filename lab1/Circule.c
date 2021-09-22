#include <stdio.h>
#include<math.h>

int main()
{
    const float Pi = 3.14;
    float radi;
    float dia;
    float Curm;
    float Area;
    printf("enter number of radius \n");
    scanf("%f",&radi);
    dia=2*radi;
    Curm=2*Pi*radi;
    Area=Pi*pow(radi,2);
    printf("Diameter of circule is %f :\n",dia);
    printf("curcumference of circule is %f \n:",Curm);
    printf("Area of circule is %f :\n",Area);
    return 0;
}
