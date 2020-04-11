#include<stdio.h>
main()
{
     int i,n,x,size,position,insert;
     printf("enter size\n");
     scanf("%d",&size);

     int a[size];
     printf("enter number in array\n");
     for(i=0;i<size;i++)
     {
          scanf("%d",&a[i]);
          printf("\n");
     }

     printf("enter element to insert\n");

          scanf("%d",&insert);
     printf("enter position to element\n");
          scanf("%d",&position);
          if(position>size+1||position<=0)
          {
               printf("error %d",size);
          }
           else

{

          for(i=size;i>=position;i--)
          {

        a[i]=a[i-1];
          }

          a[position-1]=insert;
          size++;
          printf("after inserting\n:");
          for(i=0;i<size;i++)
          {

               printf("%d\n",a[i]);
          }
          return 0;
     }
}


