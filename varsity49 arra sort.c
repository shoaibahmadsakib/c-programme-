#include<stdio.h>
int main()
{
     int i,temp,ara[5],j;
     printf("enter 5 element");
     for(i=0;i<5;i++)
     {
          scanf("%d",&ara[i]);
     }
     for(i=0;i<5;i++)
     {
          for(j=i+1;j<5;j++)
          {
               if(ara[i]>ara[j])
               {
                    temp=ara[i];
                    ara[i]=ara[j];
                    ara[j]=temp;
               }
          }
     }
     printf("descending  is ");
     for(i=5;i>=0;i--)
     {
          printf("%d\n",ara[i]);
     }


}
