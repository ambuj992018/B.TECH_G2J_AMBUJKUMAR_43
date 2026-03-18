#include<stdio.h>
int main ()
{
    int n, a[50];
    int minterm,maxterm;
     printf("Enter the size : ");
     scanf("%d",&n);

     for(int i=0; i<=n-1; i++)
     {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
     }
         minterm=a[0];
        maxterm=a[0];
     for(int i=0; i<=n-1 ; i++)
     {  
        if(a[i]>maxterm)
        maxterm= a[i];

        if(a[i]<minterm)
         minterm= a[i];
    }

    printf("minterm= %d",minterm);
    printf("maxterm = %d",maxterm);
    return 0;
}