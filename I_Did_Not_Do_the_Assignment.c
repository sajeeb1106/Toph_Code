#include<stdio.h>
int main()
{
    int n, isPrime = 1;

    scanf("%d", &n);

    if (n <= 1)
        isPrime = 0;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime==0)
    {
        for(int i = 0; i < n; i++)
        {
            printf("I DID NOT DO THE ASSIGNMENT.\n");
        }
    }
    else
    {
        printf("NO PUNISHMENT\n");
    }

    return 0;
}