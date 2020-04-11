#include<stdio.h>
int main()
{

 int j,i;
    char str[100];
    printf("Enter String\n");
    gets(str);
    j=strlen(str);

    for(i=0;i<j;i++)
     printf("%c",str[i]);
    getch();
}
