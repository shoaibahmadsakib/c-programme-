#include<stdio.h>
int main()
{
   int row,col,n;
   printf("enter the value of n");
   scanf("%d",&n);
   for(row=n;row>=1;row--)
   {
       for(col=1;col<=row;col++)
       {
            if((col+row)%2==0)
           printf("1");
           else
               printf("0");
       }
       printf("\n");
   }
  return 0;
}

