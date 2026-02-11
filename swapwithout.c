#include<stdio.h>
int main () {
    int a,b;
    printf("Enter num1 = ");
    scanf("%d",&a);
    printf("Enter num2 = ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nswapped num1 =%d",a);
    printf("\nswapped num2 =%d",b);
    return 0; 
}