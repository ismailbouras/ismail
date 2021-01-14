
#include <stdio.h>
#include <stdlib.h>


int main()
{
    char name[10],prenom[20], sex[20];
    int  age , num ;
    printf("enter you name :\n ");
    scanf("%s", &name);
    printf("enter you prenom :");
    scanf("%s", &prenom);
    printf("enter your age :");
    scanf("%d",&age);
    printf("enter your num :");
    scanf("%ld",&num);
    printf("your name is: %s \n  ", name);
    printf("your prenom is: %s \n ",prenom);
    printf("your age is:  %d \n ",age);
    printf("your num is: %ld", num);
        return 0;
 }
