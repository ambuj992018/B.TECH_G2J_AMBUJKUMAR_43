#include <stdio.h>
int main()
{
    int n, fact = 1;
    float sum = 0;

    printf("Enter number of terms in series : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
        sum = sum + ((float)i / fact);
    }
    printf("Sum of series = %f \n", sum);

    return 0;
}