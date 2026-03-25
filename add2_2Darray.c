#include<stdio.h>
int main ()
{
    int r1, r2, c1, c2,a[50][50],b[50][50], c[50][50];

 printf("Enter row and column of first matrix : ");
 scanf("%d\t%d",&r1,&c1);

 printf("Enter row and column of second matrix : ");
 scanf("%d\t%d",&r2,&c2);

 if(r1!=r2 || c1!=c2)
 {
  printf("Addition not possible.");

 }
 else {
    for(int i=0; i<r1; i++ )
    {
        for(int j=0; j<c1; j++)
        {
            printf("Enter a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
            
        }
    }

    for(int i=0; i<r2; i++ )
    {
        for(int j=0; j<c2; j++)
        {
            printf("Enter b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
            
        }
    }

    for(int i=0; i<r1; i++ )
    {
        for(int j=0; j<c1; j++)
        {   
            c[i][j] = a[i][j] + b[i][j];

            printf("%d\t",c[i][j]);
            
        }
        printf("\n");
    }

 }

 return 0;

}