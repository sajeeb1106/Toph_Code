#include <stdio.h>
int main() 
{
    int A, B;

    scanf("%d %d", &A, &B);

    int carry = 0;

    while (A > 0 || B > 0) 
    {
        int d1 = A % 10;
        int d2 = B % 10;

        if (d1 + d2 >= 10) 
        {
            carry = 1;
            break;
        }

        A /= 10;
        B /= 10;
    }
    if (carry)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}