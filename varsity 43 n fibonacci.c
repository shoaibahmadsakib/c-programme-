#include<stdio.h>
#include<conio.h>
int main()
{
     int i,j,num,k;
     printf("enter any number\n");
     scanf("%d",&num);
     if((num==0)||(num==1))
     printf("the number is fibonacci");
     else
     {
          i=0;
     j=1;
     k=i+j;
     while(k<num)
     {

          i=j;
     j=k;
     k=i+j;
     }
if(k==num)
     printf("fibonnaci",num);
else
     printf("not");
}
return 0;
}
