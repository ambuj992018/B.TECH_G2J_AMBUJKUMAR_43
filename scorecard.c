//program for scorecard 
#include<stdio.h>
int main (){
    float m,P,p,E,e,a,b;
printf("enter the marks of five subjects");
scanf("%f%f%f%f%f",&m,&P,&p,&E,&e);
a=m+P+p+E+e;
printf("addition=%f",a);
b=(a*100)/500;
printf("percentage=%f",b);
return 0;
}