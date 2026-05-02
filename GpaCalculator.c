#include <stdio.h>
int main()
{
    int T, N, i, j;
    float p, sum, gpa;

    printf("Enter The Number of Test: ");
    scanf("%d", &T);

    for(i = 1; i <= T; i++)
    {
        printf("Enter The Number Of Subject(for %dst Test): ", i);
        scanf("%d", &N);

        sum=0;

        for(j = 0; j < N; j++)
        {
            printf("Enter Grade of Subject %d: ", j + 1);
            scanf("%f", &p);
            sum = sum + p;
        }
        gpa = sum / N;

        printf("Case %d: %.2f\n", i, gpa);

    }
    return 0;
}