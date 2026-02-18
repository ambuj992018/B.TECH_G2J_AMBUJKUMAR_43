#include<stdio.h>
int main () {
    int n,i,sum=0;
 
    printf("enter the num = ");
    scanf("%d",&n);
    i=1;
    while(i<=n){
     sum=sum +i;
     i++;
    
    }    
   printf("sum pf numbers upto n = %d",sum);
    return 0;
}