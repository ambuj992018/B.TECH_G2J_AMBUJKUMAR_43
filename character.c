#include<stdio.h>
int main() {
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'){
        printf("%c is an lower case alphabet.\n",ch);
    
    }
    
    else if(ch>='A' && ch<='z'){
        printf("%c is an upper case alphabet .\n",ch);
    }
    else if (ch>=0 && ch<=9){
        printf("%c is a digit ",ch);

    }

        
    else {
        printf("%c is special character \n",ch);
    }
    
    
return 0;


}