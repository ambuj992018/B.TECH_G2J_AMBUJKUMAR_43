#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter num1 = ");
    scanf("%d", &a);
    printf("\nEnter num2 = ");
    scanf("%d", &b);

    if (a == b)
    {
        printf("\nBoth numbers are Equal");
    }
    else
    {
        printf("\nnot Equal");
    }
    return 0;
}