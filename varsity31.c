#include<stdio.h>
int main()
{
     int a,i;
    unsigned long long fact=1;
     printf("enter a positive integer:");
     scanf("%d",&a);
     if(a<0)
          printf("this is error");
     else
          for(i=1;i<=a;i++){
               fact*=i;
          }
          printf("factorial is %d=%llu",a,fact);
     return 0;

}
