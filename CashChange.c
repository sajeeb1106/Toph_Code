#include <stdio.h>
int main() 
{
    int n, i, j;

    scanf("%d", &n);

    int notes[6] = {500, 100, 50, 10, 5, 1};
    int count[6] = {0};

    for(i = 0; i < 6; i++) 
    {
        count[i] = n / notes[i];
        n = n % notes[i];
    }

    for(i = 5; i >= 0; i--) 
    {
        for(j = 0; j < count[i]; j++) 
        {
            printf("%d ", notes[i]);
        }
    }

    return 0;
}