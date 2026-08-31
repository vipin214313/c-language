//Subtract Two Numbers
#include <stdio.h>

void subtraction()
{
    int a, b, result;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    result = a - b;

    printf("Subtraction = %d", result);
}

int main()
{
    subtraction();

    return 0;
}