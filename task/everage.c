//Average of Three Numbers

#include <stdio.h>

void average()
{
    float a, b, c, avg;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    avg = (a + b + c) / 3;

    printf("Average = %f", avg);
}

int main()
{
    average();

    return 0;
}