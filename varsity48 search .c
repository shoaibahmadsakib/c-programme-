#include<stdio.h>
main()
{
     int i,n,search,flag=0;
     printf("enter size\n");
     scanf("%d",&n);
     int a[n];
     printf("enter the number\n");
     for(i=0;i<n;i++)
     {
          scanf("%d",&a[i]);
     }
     printf("enter element to search\n");
     scanf("%d",&search);
     for(i=0;i<n;i++)
     {
          if(a[i]==search)

     {
          printf("search successfull\n");
     }
     else{
          printf("not\n");
     }
}
}
