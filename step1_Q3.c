#include<stdio.h>
#include<math.h>
#define pi 3.14

int main(){
float r,d,p,s;
printf("enter the rayone r:");
scanf("%f",&r);
 d=2*r;
    p=2*pi*r;
    s=pi*pow(r,2);


    printf("diamètre %.2f\n,périmètre %.2f\n,surface %.2f\n",d,p,s);
return 0;
}
