#include <stdio.h>
#include <string.h>
int main() 
{
    char A[20];
    int i;
    scanf("%s", A);

    A[0] = A[0] - 32;

    for(i = 0; A[i] != '\0'; i++) 
    {
        if(A[i] == 's') 
        {
            printf("$");
        }
        else if(A[i] == 'i') 
        {
            printf("!");
        }
        else if(A[i] == 'o') 
        {
            printf("()");
        }
        else 
        {
            printf("%c", A[i]);
        }
    }
    printf(".");
    return 0;
}