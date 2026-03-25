#include<stdio.h>
int main () {

    int a[50],n, E=0 , O=0 ;
    printf("Enter number of elements in an array : ");
    scanf("%d",&n);
     for(int i =0; i<n ; i++)
     {
        printf("Enter a[%d] = ",i);
        scanf("%d",&a[i]);

     }

     for(int i=0; i<n ; i++)
     {
        if(a[i]%2==0)
           E++;
        else 
           O++;
     }
  printf("Number of even elements : %d .\n",E);
  printf("Number of odd elements : %d .\n",O);
  
  return 0;

}
