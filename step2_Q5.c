#include <stdio.h>
#include <stdlib.h>

 main()
 {
     int x, i ;
     printf("enter a number:");
     scanf("%d",&x);
     for (i=2;i<=x-1;i++)
        if(x%i==0)
        break;
     if(i==x)
     printf("%d is a prime number",x);
     else
     printf("%d is not prime number",x);


 }
