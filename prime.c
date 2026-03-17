#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    for (int i = 2; i <= sqrt(n); i++)
    {

        if (n > 1 && n % i == 0)
        {
            printf("%d is a composite number.", n);
            return 0;
        }
    }
    if (n <= 1)
    {
        printf("%d is neither prime nor composite.", n);
    }
    else
    {
        printf("%d is prime number.", n);
    }
    return 0;
}