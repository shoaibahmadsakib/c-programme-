#include<stdio.h>
main()
{
     int i,size,position,del,flag=0;
     printf("enter size\n");
     scanf("%d",&size);
     int a[size],temp[size-1];
     printf("enter number in array\n");
     for(i=0;i<size;i++)
     {
          scanf("%d",&a[i]);
     }
     printf("enter element delete\n");
     scanf("%d",&del);
     for(i=0;i<size;i++)
     {
          if(a[i]==del)
          {
               position=i;
               flag=1;
          }
     }
     if(flag==1)
     {
          for(i=0;i<size-1;i++)
          {
               if(i<position)
               {
                    temp[i]=a[i];
               }
               if(i>=position)
               {
                    temp[i]=a[i+1];
               }

          }
          printf("array after delete %d\n",del);
          for(i=0;i<size-1;i++)
          {
               printf("%d\n",temp[i]);
          }
     }
     else
     {
          printf("number not found\n");
     }
}
