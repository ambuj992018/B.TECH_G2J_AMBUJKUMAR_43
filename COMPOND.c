//progran for simple and compoud interest
#include<stdio.h>
#include<math.h>
int main () {
    float P,R,T,Amount,SI,CI;
    printf("enter the principle amount,rate and time period\n");
    scanf("%f%f%f",&P,&R,&T);
    SI=(P*R*T)/100;
    printf("Simple interest=%f",SI);
Amount= P*pow((1+R/100),T);
 CI = Amount -P;
 printf("\ncompound interest = %f",CI);
    return 0;
}