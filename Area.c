//program for area and circumference circle
#include<stdio.h>
#include<math.h>
int main () {
    float r ,C,A;

    printf("Enter the radius if circle");
    scanf("%f",&r);
    C=2*3.14*r;
    A= 3.14*pow(r,2);
    printf("circumference=%f",C);
    printf("area=%f",A);
    return 0;

}
