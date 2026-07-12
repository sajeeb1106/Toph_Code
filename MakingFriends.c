#include <stdio.h>
int main() 
{
    int n, count = 0;
    scanf("%d", &n);

    for (int i = 1; i * i <= n; i++) 
    {
        if (n % i == 0) 
        {
            if (i != n) 
            {
                count++;
            }
            if (i != 1 && i * i != n && n / i != n) 
            {
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}