#include <stdio.h>
#include <math.h>
int count(int a)
{
    int c = 0;
    for (int i = a; i > 0; i = i / 10)
        c++;
    return c;
}

int arm(int a)
{
    int sum = 0;
    int p = count(a);

    while (a > 0)
    {
        sum += pow(a % 10, p);
        a = a / 10;
    }
    return sum;
}
int main()
{
    printf("Arms list is :\n");
    for (int i = 1; i <= 100; i++)
    {
        if (i == arm(i))
            printf("%d\t", i);
    }
}