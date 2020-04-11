#include<stdio.h>
int main()
{
     int a,i,s=0;
     printf("enter a value:");
     scanf("%d",&a);
     for(i=1;i<=a;i=i+2)
      s=s+i;
     printf("the sum is%d",s);
     return 0;
}
