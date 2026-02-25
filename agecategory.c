#include<stdio.h>
int main(){
    int age;
    printf("Enter the age of person : ");
    scanf("%d",&age);


    if(age>60){
        printf("he/she is senior citizen");

        }
        else if (age>=18 && age<=60){
            printf("He/she is an adult ");
        }
        else if (age>=13 && age<=17){
            printf("He/she is a teen.");

        }
        else if (age>=0 && age<=12){
            printf("He/she is a child");
        }
    }
