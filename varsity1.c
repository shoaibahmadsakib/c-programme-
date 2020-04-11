#include<stdio.h>

int main()

{
char ch;
printf("enter a lower case:");
scanf("%c",&ch);
ch=ch-32;
printf("lowercase=%c",ch);
return 0;
}
