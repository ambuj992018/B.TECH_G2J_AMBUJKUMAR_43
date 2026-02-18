#include<stdio.h>
#include<math.h>
int main () {
    int a,b,c;
    float D, r1,r2,r1real,r2real,r1img, r2img;
    printf("enter coeficient of x*x ,x and constant respectively :");
    scanf("%d%d%d",&a,&b,&c);
   D=(pow(b,2) - 4*a*c) ;
   

    if(D>0){
    r1= (-b + sqrt(D)/2*a) ;

    r2 = (-b - sqrt(D))/2*a ;
    
    printf("root1 =%f",r1);
    printf("root2 = %f",r2);
    }
    else if (D==0)
    {
        r1 = -b/(2*a);
        printf("real and equal roots r1=r2 :%f",r1);
    }

    else if (D<0){
      r1real = (-b/2*a);
    
        r1img = sqrt(-D)/2*a;
      r2real = (-b/2*a);
       r2img=sqrt(-D)/2*a;
      
      printf("root1r =%f",r1real);
    printf("root1i = %f",r1img);
    
    printf("\nroot2r =%f",r2real);
    printf("root2i = %f",r2img);


      
    }
    
  return 0;


}