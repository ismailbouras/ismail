#include <stdio.h>
#include <stdlib.h>

int main()
{


int a , b;
printf("enter a");
scanf("%d", &a);
printf("enter b");
scanf("%d",&b);
printf("a + b = %d \n",a+b);
printf("a x b = %d \n",a*b);
printf("a - b = %d \n",a-b);
printf("a / b = %.2f \n",(float)a/b);

return 0;
}

________________________________________________________________________________

#include <stdio.h>
int main() {
    char operator;
    double first, sec;
    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &sec);

    switch (operator) {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", first, sec, first + sec);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", first, sec, first - sec);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", first, sec, first * sec);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", first, sec, first / sec);
        break;
        
    default:
        printf("operator is not correct !!");
    }

    return 0;
}