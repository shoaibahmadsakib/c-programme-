#include<stdio.h>
int main()
{
     int a,b,gcd,n1,n2,rem,lcd;

     printf("enter two integer number:");
     scanf("%d %d",&a,&b);
     n1=a;
     n2=b;
     while(n2!=0)
     {
          rem=n1%n2;
          n1=n2;
          n2=rem;
     }
     gcd=n1;
     lcd=(a*b)/gcd;
     printf("the gcd is %d\n",gcd);
     printf("the lcd is %d",lcd);
}
