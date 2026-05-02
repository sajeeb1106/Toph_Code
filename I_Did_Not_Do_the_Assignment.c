#include<stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    if (n <= 1)
    {
        return 0;
    }

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("NO PUNISHMENT\n");
            return 0;
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("I DID NOT DO THE ASSIGNMENT.\n");
    }

    return 0;
}
