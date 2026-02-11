#include<stdio.h>
int main () {
    int a , b ,c;

printf("Enter num1 = ");
scanf("%d",&a);
printf("Enter num2 = ");
scanf("%d",&b);
c = a;
a =b;
b =c;
printf("swapped num1 =%d ",a);
printf(" swapped num2 =%d",b);


}