#include<stdio.h>
int main(){
    int n,a[n], sum=0;
    printf("Enter the size :");
    scanf("%d",&n);

    for(int i=0 ; i<n-1 ; i++)
    {
        printf("Enter a[%d] = ",i);
        scanf("%d",&a[i]);

    }

    for(int i=0 ; i<n ; i++)
    { sum+=a[i];

    }
    printf("sum of elements : %d",sum);
    return 0;
}