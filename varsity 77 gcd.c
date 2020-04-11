#include<stdio.h>
int GCD(int n1,int n2)
{
    int rem;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    return n1;
}
int main()
{
    int n1,n2,gcd,lcd;
    printf("enter n1,n2:\n");
    scanf("%d %d",&n1,&n2);
    gcd=GCD(n1,n2);
    lcd=(n1*n2)/gcd;
    printf("gcd= %d",gcd);
    printf("lcd= %d",lcd);
}

