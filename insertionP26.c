#include<stdio.h>
void insertion(int a[], int n)
{
int i,j,temp;
for(i=1; i<n; i++)
{   temp=a[i];
    j=i-1;

   while(a[j]>temp && j>=0)
   {
    a[j+1]=a[j];
       j--;
   }
   a[j+1]=temp; 
}
}

void print(int a[],int n)
{
    for(int i=0; i<n;i++){
        printf("%d\t",a[i]);
    }
}
int main ()
{    
    int n , a[50] , i,j;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("Arry before sorting \n");
    print(a,n);
    printf("\n");
    printf("Arry after sorting \n");
    insertion(a,n);
    print(a,n);
 
    return 0;

}