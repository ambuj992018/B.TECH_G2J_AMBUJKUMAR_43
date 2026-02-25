#include<stdio.h>
int main()
{
    int s1,s2,s3;

printf("Enter side1 : ");
scanf("%d",&s1);
printf("Enter side2 : ");
scanf("%d",&s2);
printf("Enter side3 : ");
scanf("%d",&s3);

if(s1+s2>s3 && s1+s3>s2 && s2+s3>s1){
    printf("It is a tringle.\n");
    if(s1==s2==s3){
        printf("It is an equilateral triangle.\n");
   }
   else if(s1==s2 || s2==s3 || s1==s3){
    printf("It is an isosceles triangle.\n");

   }
   else if (s1!=s2!=s3){
    printf("It is a scalene triangle.\n");
   }
}
else{
    printf("It not an triangle.\n");
}
return 0;
}