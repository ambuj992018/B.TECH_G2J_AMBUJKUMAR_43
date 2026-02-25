#include<stdio.h>
int main(){
    int a[50] , n,i;
    printf("enter the  number of elements : ");
    scanf("%d",&n);

    for(i=0; i<n ;i++){
        printf("Enter a[%d] = ",i);
        scanf("%d",&a[i]);
     }
     for (i=0; i<n ;i++){
        printf("%d\t",a[i]);

     }
     return 0;
}