#include <stdio.h>

int main()

{

char Operator;

int a,b;

printf("enter an Operator + or - or * or / : ");

scanf("%c",&Operator);

printf("enter two nmbers: ");

scanf("%d %d",&a,&b);

if (Operator=='+')

printf("addition of a and b is %d", a+b);

if (Operator=='-')

printf("minus of a and b is %d", a-b);

if (Operator=='/')

printf("divide of a and b is %d", a/b);

if (Operator=='*')

printf("multiply of a and b is %d", a*b);

return 0;

}
