#include<stdio.h>
#include<string.h>

int main()
{
  char str1[10],str2[10];
  int n,o,p,q;
  printf("Enter string 1: ");
  scanf("%s",str1);
  printf("Enter string 2: ");
  scanf("%s",str2);
  n=strlen(str1);
  o=strlen(str2);
  printf("length of string1=%d\t string2=%d \n",n,o);
  strcpy(str2,str1);
  printf("%s\n",str2);
  strcat(str1,str2);
  printf("%s\n",str1);
  p=strcmp(str1,str2);
  if(p==0)
  printf("strings are same.\n");
  else if(p>0)
  printf("string str1 is lexicographically greater.\n");
  else
  printf("string str2 is lexicographocally greater.\n");
  strrev(str1);
  printf("reverse of str1 =%s",str1);

  return 0;

}
