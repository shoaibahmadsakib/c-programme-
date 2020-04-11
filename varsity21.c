#include<stdio.h>
int main()
{
     int a,i,s=0;
     printf("enter a value:");
     scanf("%d",&a);
     for(i=1;i<=a;i++)
      s=s+(2*i+1)*(2*i-1);
     printf("the sum is%d",s);
     return 0;
}

