#include<stdio.h>

void selection(int a[], int n)
{
int i,j,temp,min;
for(i=0; i<n-1; i++)
{   
     min=i;
    for(j=i+1; j<n; j++)
    {
        if(a[min]>a[j])
        {
            min =j;

        }
    }
        if(min!=i){
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    } 
}


void print(int a[], int n)
{  for(int i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }

}
int main ()
{
    int n, a[50],i,j;
    printf("Enter no. of elements : ");
    scanf("%d",&n);
    for(i=0; i<n;i++)
    {
        printf("Enter a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("\n Array before sorting.\n");
    print(a,n);
    printf("\n");
    printf("Array after sorting\n");
    selection(a,n);
    print(a,n);

    return 0;
}