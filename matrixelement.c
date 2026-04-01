#include<stdio.h>
int main()
{
    int n,a[20][20];
    printf("Enter order of matrix:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<n;j++)
        {  printf("Enter a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0;j<n;j++)
        {
          printf("%d\t",a[i][j]);

        }
        printf("\n");
    }
    for(int i=0; i<n;i++)
    {    int sumR = 0;
        int sumC =0;
        for(int j=0; j<n;j++)
        {   sumR+=a[i][j];
            sumC+=a[j][i];
        }
        printf("sum of elements of r(%d) =%d\n",i,sumR);
        printf("sum of elements of c(%d) =%d\n",i,sumR);
    }     
    return 0;
}