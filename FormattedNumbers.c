#include <stdio.h>
#include <string.h>

int main()
{
    char A[20];
    scanf("%s", A);

    int len = strlen(A);

    for (int i = 0; i < len; i++)
    {
        printf("%c", A[i]);

        if ((len - i - 1) % 3 == 0 && i != len - 1)
        {
            printf(",");
        }
    }

    return 0;
}