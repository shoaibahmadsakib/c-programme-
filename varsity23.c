#include<stdio.h>
int main()
{
     int a,i,s=0;
     printf("enter series:");
     scanf("%d",&a);
     for(i=1;i<=a;i++)
          s=s+(3*i-1)*(3*i+2)*(3*i+5);
     printf("sum is %d",s);
     return 0;
}
