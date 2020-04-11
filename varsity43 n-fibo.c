#include<stdio.h>
#include<conio.h>
int main()
{
     int a,b,c,next,num;
     printf("enter any number");
     scanf("%d",&num);
     if((num==0||num==1))
          printf("\n %d is a fibonacci term",num);
     else{
          a=0;
          b=1;
          c=a+b;
          while(c<num)
          {
               a=b;
               b=c;c=a+b;

          }
          if(c==num)
               printf(" fibonacci turm");
          else
               printf(" not a fibonnaci");
     }
}
