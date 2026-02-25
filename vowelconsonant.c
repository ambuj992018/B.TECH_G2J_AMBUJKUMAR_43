#include<stdio.h>
int main() {
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'){
        printf("It is an lower case alphabet.\n");
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            printf("%c is a vowel.\n",ch);
        }
        else{
            printf("%c is a consonant.\n",ch);
        }
    }
    
    else if(ch>='A' && ch<='z'){
        printf("It is an lower case alphabet .\n");
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            printf("%c is a vowel.\n",ch);
        }
        else{
            printf("%c is a consonant.\n",ch);
        }
    }
    else {
        printf("error in input\n");
    }
    
    
return 0;


}