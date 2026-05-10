#include <stdio.h>

int main()
{
    int n, i;
    char s[105];

    scanf("%d", &n);
    scanf("%s", s);

    for(i = 0; i < n - 1; i++)
    {
        if(s[i] == s[i + 1])
        {
            printf("Change needed\n");
            return 0;
        }
    }

    printf("No change needed\n");

    return 0;
}