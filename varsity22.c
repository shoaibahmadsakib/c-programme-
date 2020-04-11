#include<stdio.h>
int main()
{
     int a,i,s=0;
     printf("enter value:");
     scanf("%d",&a);
     for(i=1;i<=a;i++)
     s=s+(2*i-1)*(2*i+1)*(2*i+3)*(2*i+5);
     printf("sum is %d",s);
     return 0;
}
