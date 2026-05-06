#include<stdio.h>
int main()
{
    int C, R;

    scanf("%d", &R);  // R is for Rank

    scanf("%d", &C);  // C is for credit

    if (R > 2000)
    {
        if (C == 0)
        {
            printf("Compiler Water\n");
        }
        else if (C > 1000)
        {
            printf("Quantum Pizza\n");
        }
        else
        {
            printf("Neural Noodles\n");
        }
    }
    else
    {
        if (C == 0)
        {
            printf("Null Soup\n");
        }
        else if (C > 1000)
        {
            printf("Buggey Burger\n");
        }
        else
        {
            printf("Logic Lemonade\n");
        }
    }
    return 0;
}