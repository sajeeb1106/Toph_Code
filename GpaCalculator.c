#include <stdio.h>
int main()
{
    int T, N, i, j;
    float p, sum, gpa;

    scanf("%d", &T);

    for(i = 1; i <= T; i++)
    {
        scanf("%d", &N);

        sum=0;

        for(j = 0; j < N; j++)
        {
            scanf("%f", &p);
            sum = sum + p;
        }
        gpa = sum / N;

        printf("Case %d: %.3f\n", i, gpa);

    }
    return 0;
}