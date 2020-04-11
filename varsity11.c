#include<stdio.h>
int main()
{
    int a;
    float b;
    printf("enter a number:");
    scanf("%d",&a);
    b=log10(a);
    printf("the result is=%.2lf",b);
    return 0;
}
