
#include <stdio.h>

int fact(int);

void main()
{
 int n,r,npr;

  	printf("Enter a number n\n");
  	scanf("%d",&n);
 printf("Enter a number r\n");
  	scanf("%d",&r);
  	npr=fact(n)/fact(n-r);
    printf("Value of %d C%d = %d\n",n,r,npr);
    return 0;
}

int fact(int n)
{
     int i,f=1;
     for(i=1;i<=n;i++)
     {


          f=f*i;
     }
     return 0;
}



