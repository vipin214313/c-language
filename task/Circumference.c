//Circumference of Circle
#include <stdio.h>

void circumference()
{
    float r, c;
    float pi = 3.14;

    printf("Enter radius: ");
    scanf("%f", &r);

    c = 2 * pi * r;

    printf("Circumference = %f", c);
}

int main()
{
    circumference();

    return 0;
}