
#include <stdio.h>
#include <stdlib.h>

int main()

{
float x1, x2, delta, a, b, c;
printf("enter the value of a:\n");
scanf("%f",&a);
printf("enter the value of b:\n");
scanf("%f",&b);
printf("enter the value of c:\n");
scanf("%f",&c);

delta = (b*b)-(4*a*c);

if (delta == 0.0)
{
x1 = -b /(2*a);
printf("la solution unique est xs = %.2f \n",x1);
}
if (delta > 0.0)
{
x1 = (-b - sqrt(delta))/(2*a);
x2 = (-b + sqrt(delta))/(2*a);
printf("les deux racines sont : x1 = %.2f et x2 = %.2f \n",x1, x2);
}
if (delta < 0.0)

printf("l'equation n admet pas de solution");

return 0;
}
