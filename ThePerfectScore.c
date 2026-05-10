#include <stdio.h>

int main() 
{
    int a, b;

    scanf("%d %d", &a, &b);

    int theory_pass = 24; 
    int practical_pass = 16;

    if (a >= theory_pass && b >= practical_pass) 
    {
        if (a + b >= 70) 
        {
            printf("Perfect Score\n");
        } 
        else 
        {
            printf("Passed\n");
        }
    } 
    else 
    {
        printf("Failed\n");
    }
    return 0;
}