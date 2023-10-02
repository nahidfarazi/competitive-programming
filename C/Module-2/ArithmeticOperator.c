#include <stdio.h>

int main()
{
    // write c program code
    int a, b, sum, sub, div, mul, mod;
    printf("enter your first number: ");
    scanf("%d", &a);
    printf("enter your second number: ");
    scanf("%d", &b);
    printf("Result of sum = ");
    sum = a+b; printf("%d\n",sum);
     printf("Result of sub = ");
    sub = a-b; printf("%d\n",sub);
     printf("Result of mul = ");
    mul = a*b; printf("%d\n",mul);
     printf("Result of div = ");
    div = a/b; printf("%d\n",div);
     printf("Result of mod = ");
    mod = a%b; printf("%d\n", mod);

printf("<<<<<--------->>>>\n");

float x = 20;
int y = 10;
float dvd = x*1.0 / y;
printf("%0.3f\n", dvd);


    return 0;
}