#include<stdio.h>
int fact(int);
void main()
{
     int n,r,c;
     printf("enter the value of n and r");
     scanf("%d %d",&n,&r);
     if(n>=r)
     {
          c=fact(n)/fact(r)*fact(n-r);
          printf("\n\n the value of %d c %d is:%d",n,r,c);

     }
     else
          printf("\n n is less then r");

}
int fact(int val)
{
int f=1;
while(val>0)
{
     f=f*val;
     val--;
}
return f;
}

