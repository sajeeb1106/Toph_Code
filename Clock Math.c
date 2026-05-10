#include<stdio.h>
#include<math.h>

int main()
{
    int M, H;
    double hour_angle, minute_angle, angle;

    scanf("%d %d", &H, &M);

    hour_angle = (30.0 * H) + (0.5 * M);
    minute_angle = 6.0 * M;

    angle = fabs(hour_angle - minute_angle);

    if (angle > 360.0 - angle)
    {
        angle = 360.0 - angle;
    }

    printf("%.6f\n", angle);

    return 0;
}
