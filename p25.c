#include<stdio.h>
int main ()
{
    int n, a[50],key,loc=-1;
    printf("Enter size : ");
    scanf("%d",&n);


    for(int i=0; i<=n-1; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
}
printf("Enter the searching element :");
scanf("%d",&key);

for(int i=0; i<=n-1; i++)
{
    if(a[i]==key){
        loc=i;
        printf("%d element is found at index value %d \n",key,loc);

    }
}
if(loc==-1)
printf("Element not found .");

return 0;
}