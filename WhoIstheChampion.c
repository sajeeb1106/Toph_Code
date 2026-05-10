#include<stdio.h>
int main()  
{
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    if(a > b)
    {
        printf("Champion\n");
        printf("Runner up\n");
    }
    else 
    {
        printf("Runner up\n");
        printf("Champion\n");
    }
   return 0;
}