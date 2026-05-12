#include <stdio.h>
int main() 
{
    int N;
    scanf("%d", &N);

    int arr[100];

    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int count = 1;

    for (int i = 0; i < N - 1; i++) 
    {
        if (arr[i] > arr[i + 1]) 
        {
            count = 0;
            break;
        }
    }

    if (count)
        printf("Yes");
    else
        printf("No");

    return 0;
}