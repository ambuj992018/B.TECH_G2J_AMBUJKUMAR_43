#include <stdio.h>
int main()
{
    int n, i, n1, n2, n3;
    printf("Enter number of terms in series : ");
    scanf("%d", &n);
    printf("Enter the first term : ");
    scanf("%d", &n1);
    printf("\nEnter the second term : ");
    scanf("%d", &n2);

    for (i = 1; i <= n; i++)
    {

        printf("%d\t", n1);

        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }

    return 0;
}