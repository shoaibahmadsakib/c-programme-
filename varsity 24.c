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
     if((row+col)%2==0&&row!=1)

            printf("0");
         else if(row==1)
               printf("1");
         else
printf("1");
       }
       printf("\n");
   }

  return 0;
}
