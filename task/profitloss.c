//Profit and Loss
#include <stdio.h>

void profitLoss()
{
    float cp, sp, profit, loss;

    printf("Enter Cost Price: ");
    scanf("%f", &cp);

    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    if (sp > cp)
    {
        profit = sp - cp;
        printf("Profit = %f", profit);
    }
    else if (cp > sp)
    {
        loss = cp - sp;
        printf("Loss = %.2f", loss);
    }
    else
    {
        printf("No Profit No Loss");
    }
}

int main()
{
    profitLoss();

    return 0;
}