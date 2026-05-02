#include <stdio.h>
int main()
{
    int T, N, i, j;
    float g, sum, gpa;

    printf("Enter The Number of Test: ");
    scanf("%d", &T);

    for(i = 1; i <= T; i++)
    {
        printf("Enter The Number Of Subject for Test %d: ", i);
        scanf("%d", &N);

        sum=0;

        for(j = 1; j <= N; j++)
        {
            printf("Enter Grade of Subject %d: ", j);
            scanf("%f", &g);
            sum = sum + g;
        }
        gpa = sum / N;

        printf("Case %d: %.2f\n", i, gpa);

    }
    return 0;
}