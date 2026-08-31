//Total and Percentage of 5 Subjects

#include <stdio.h>
void marks()
{
    float s1, s2, s3, s4, s5;
    float total, percentage;

    printf("Enter marks of Subject 1: ");
    scanf("%f", &s1);

    printf("Enter marks of Subject 2: ");
    scanf("%f", &s2);

    printf("Enter marks of Subject 3: ");
    scanf("%f", &s3);

    printf("Enter marks of Subject 4: ");
    scanf("%f", &s4);

    printf("Enter marks of Subject 5: ");
    scanf("%f", &s5);

    total = s1 + s2 + s3 + s4 + s5;

    percentage = (total / 500) * 100;

    printf("Total Marks = %f\n", total);
    printf("Percentage = %f%%", percentage);
}

int main()
{
    marks();

    return 0;
}