// check the nature of triangle
#include <stdio.h>
int main()
{
    int s1, s2, s3;
    printf("Enter length of side1 : ");
    scanf("%d", &s1);
    printf("Enter length of side2 : ");
    scanf("%d", &s2);
    printf("Enter length of side3 : ");
    scanf("%d", &s3);

    if (s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1)
    {
        printf("It is a triangle.\n");
    }

    if (s1 == s2 && s2 == s3)
    {
        printf("It ia an Equilateral triangle.");
    }
    else if (s1 == s2 || s2 == s3 || s3 == s1)
    {
        printf("it is isosceles triangle.");
    }
    else
    {
        printf("it is scalene triangle.");
    }

    return 0;
}