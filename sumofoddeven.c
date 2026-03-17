#include <stdio.h>
int main()
{
    int i, N, sumOdd = 0, sumEven = 0;
    printf("Enter the number : ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            sumEven += i;
        }
        else
        {
            sumOdd += i;
        }
    }
    printf("Sum of even terms : %d", sumEven);
    printf("\n\nSum of Odd terms : %d", sumOdd);

    return 0;
}