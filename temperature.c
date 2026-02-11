//program for temperature measurement
#include<stdio.h>
int main () {
    float C,F;
    printf("enter the temperature measured in degree celcius");
    scanf("%f",&C);
    F=(9*C)/5 + 32;
    printf("temperature in fareenheit=%f",F);
    return 0;

}