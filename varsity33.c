#include<stdio.h>
void main()
{
     int binn=0,n,i,dec,j;
     printf("enter a decimal number:\n");

scanf("%d",&n);
dec=n;
     i=1;

for(j=n;j>0;j=j/2)
     {


          binn=binn+(n%2)*i;
     i=i*10;
     n=n/2;
     }
          printf("%d is %d",dec,binn);



}
