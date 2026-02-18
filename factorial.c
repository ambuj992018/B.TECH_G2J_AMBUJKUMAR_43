#include<stdio.h>
int main(){
    int i,n,fact;
    printf("Enter mum = ");
    scanf("%d",&n);

    i=1;
    fact=1;
    while(i<=n){
        fact =fact*i ;
        i++ ;
        
    }
    printf("factorial of the number = %d",fact);

    return 0;
}