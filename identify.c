#include<stdio.h>
int main () {
    char ch;

printf("Enter the character : ");
scanf("%c",&ch);

if (ch>='a' && ch<='z' ){
    printf("lower case");
}
else if(ch>='A' && ch<='Z'){
    printf("upper case ");

}
else if (ch>='0' && ch<='9'){
    printf("it is digit ");
}
else {
printf("special character");
}
  return 0;

}

