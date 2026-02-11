//program for scorecard 
#include<stdio.h>
int main (){
    float m,P,p,E,e,a,b;
printf("enter the marks of five subjects = ");
scanf("%f\n%f\n%f\n%f\n%f",&m,&P,&p,&E,&e);
a=m+P+p+E+e;
printf("addition=%f",a);
b=(a*100)/500;
printf("percentage=%f",b);
if (b>=90 && b<=100) 
    printf("\ngrade A.");
else if (b>=80 && b<90) 
 printf("Grade B");

else if (b>=60 && b<80) 
    printf("Grade C ");
else if (b<60) 
    printf("Grade D ");

return 0;
}




