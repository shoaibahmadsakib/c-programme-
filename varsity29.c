 #include<stdio.h>
int main()
{
   int row,col,n;
   printf("enter the value of n");
   scanf("%d",&n);
   for(row=1;row<=n;row++)
   {
       for(col=1;col<=n-row;col++)

       printf("   ");

       for(col=row;col<=row*2-1;col++)

           printf("%3d",col);


       for(col=2*row-2;col>=row;col--)

           printf("%3d",col);


       printf("\n");
   }
   for(row=n-1;row>=1;row--)
   {
       for(col=1;col<=n-row;col++)

       printf("   ");

       for(col=row;col<=row*2-1;col++)

           printf("%3d",col);


       for(col=2*row-2;col>=row;col--)

           printf("%3d",col);


       printf("\n");
   }
  return 0;
}







