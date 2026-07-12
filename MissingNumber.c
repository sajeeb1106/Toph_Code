#include <stdio.h>
int main()
{
    int n, a, b, c, missing;

    scanf("%d", &n);
    scanf("%d %d %d", &a, &b, &c);

    missing = n - (a + b + c);
    printf("%d\n", missing);

    return 0;
}