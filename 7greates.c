#include<stdio.h>
int main () {
 int a,b,c;
 printf("Enter num1 = ");
 scanf("%d",&a); 
 printf("Enter num2 = ");
 scanf("%d",&b); 
 printf("Enter num3 = ");
 scanf("%d",&c);
 if (a>b) {
    if (a>c) {
        printf(" greatest is %d ",a);
    }
    else {
        printf(" greatest is %d",c);
    }
}

    else {
    
        if (b>c) {
            printf(" greatest is %d",b);
        }
        else {
            printf(" greatest is %d",c);
            }
        }
        return 0;
    
 }




