#include<stdio.h>
int main()
{
    int n, a[50], tempt;

    printf("Enter no. of elements: ");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        printf("Enter a[%d]= ",i);
        scanf("%d",&a[i]);

    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(a[j]>a[++j])
            {
                tempt=a[j];
                a[j]=a[++j];
                a[++j]=tempt;

            }
        }

    }
    printf("Sorted array \n");
    for(int i=0; i<n; i++)
    {
        printf("%d\t".a[i]);
    }

    return 0;


}
