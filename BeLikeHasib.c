#include <stdio.h>
int main()
{
    long long N, X;
    scanf("%lld %lld", &N, &X);

    long long beg = 1, end = N;
    int count = 0;

    while (beg <= end)
    {
        long long mid = (beg + end) / 2;
        count++;

        if (X <= mid)
        {
            end = mid;
        }
        else
        {
            beg = mid + 1;
        }
        if (beg == end)
        {
            break;
        }  
    }
    printf("%d\n", count);
    return 0;
}