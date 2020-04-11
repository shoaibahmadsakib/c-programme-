#include <stdio.h>
#include <string.h>


int main()
{
    char str1[100], str2[100],*ptr1,*ptr2;
    int res;
    ptr1=&str1;
    ptr2=&str2;

    printf("Enter first string: ");
    gets(ptr1);
    printf("Enter second string: ");
    gets(ptr2);
    res = strcmp(ptr1,ptr2);
    if(res == 0)
    {
        printf("Both strings are equal.");
    }
    else if(res == -1)
    {
        printf("First string is smaller than second  ");
    }
    else
    {
        printf("First string is greater than second ");
    }

    return 0;
}
