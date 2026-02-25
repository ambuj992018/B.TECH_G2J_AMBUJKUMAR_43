#include<stdio.h>
#include<math.h>
int main() {
    int n,a=0,n1,sum=0,r;
    printf("Enter number : ");
    scanf("%d",&n);
    n1=n;
    while(n>0){
        n=n/10;
        a++;
    }
    printf("\nNO. of digits : %d",a);

    n=n1;
    while(n>0){
        r=n%10;
        sum = sum + pow(r,a);
        n=n/10;

    }
    printf("\nsum of digits raised to the power of number of digits = %d",sum);

    if (sum==n1){
        printf("\n%d is an Armstrong number.",n1);
    }
    else{
        printf("\n%d is not an Armstrong number.",n1);
    }
    return 0;


    }

