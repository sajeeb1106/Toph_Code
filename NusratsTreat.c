#include <stdio.h>

int main()
{
    int n, chocolates;
    scanf("%d", &n);

    chocolates = n * (n + 1) / 2;

    printf("%d\n", chocolates);

    return 0;
}