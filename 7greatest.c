#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter num1 = ");
    scanf("%d", &a);
    printf("Enter num2 = ");
    scanf("%d", &b);
    printf("Enter num3 = ");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is greatest.", a);
        }
        else
        {
            printf("%d is greatest.", c);
        }
    }

    else
    {

        if (b > c)
        {
            printf("%d is greatest.", b);
        }
        else
        {
            printf("%d is greatest.", c);
        }
    }
    return 0;
}