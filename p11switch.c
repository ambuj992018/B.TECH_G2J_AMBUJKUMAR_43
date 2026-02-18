#include<stdio.h>
int main() {
    int a,b;
    char op;
    printf("Enter num1 = ");
    scanf("%d",&a);
    printf("Enter num2 =");
    scanf("%d",&b);
    printf("Enter the operator(+,-,*,/): ");
    scanf(" %c",&op);

    switch(op){
        case '+':
        printf("sum = %d",a+b);
        break;
        case '-' :
        printf("subtraction = %d",a-b);
        break;
        case '*' :
        printf("multiplication = %d",a*b);
        break;
        case '/' :
        if(b>0)
        printf("division = %f",(float)a/b);
        else 
        printf("can't be performed");
        break;

        default :
        printf("error");

    }
     return 0;
}