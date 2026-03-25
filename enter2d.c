#include<stdio.h>
int main ()
{
    int r,c, a[50][50];
    printf("Enter row and column : ");
    scanf("%d\t%d",&r,&c);
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("Enter a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered matrix \n");

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d\t",a[i][j]);
    
        }
        printf("\n");
    }
    
    return 0;

}