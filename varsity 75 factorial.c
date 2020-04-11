#include<stdio.h>
int factorial(int a)
{
    int i,fact=1;
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;

}
int main()
{
    int n;
    printf("enter n:\n");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("fact= %d",fact);
}
