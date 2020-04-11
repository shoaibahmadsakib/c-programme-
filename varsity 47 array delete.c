#include<stdio.h>
#define MAX_SIZE 100
int main()
{
     int arr[MAX_SIZE];
     int i,size,pos;
     printf("element ");
     scanf("%d",&size);
     printf("enter a number of element",size);
     for(i=0;i<size;i++)
     {
          scanf("%d",&arr[i]);
     }
     printf("enter the delet position");
     scanf("%d",&pos);
     for(i=pos-1;i<size-1;i++)
     {
          arr[i]=arr[i+1];
     }
     size--;

printf("\n element after delet ");
for(i=0;i<size;i++)
{
     printf("%d\t",arr[i]);
}
     return 0;
}
