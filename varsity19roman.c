#include<stdio.h>
int main()
{
     int num,rom;
     printf("enter a integer number:");
     scanf("%d",&num);
     printf("the roman number is=");

     while(num>0)
     {
          if(num>=1000)
          {
               printf("H");
               num-=1000;
          }
          else if(num>=900)
          {
               printf("CH");
               num-=900;
          }
          else if(num>=500)
          {
               printf("D");
               num-=500;
          }
          else if(num>=100)
          {
               printf("C");
               num-=100;
          }
          else if(num>=50)
          {
               printf("L");
               num-=50;
          }
          else if(num>=40)
          {
               printf("XL");
               num-=40;
          }
          else if(num>=10)
          {
               printf("X");
               num-=10;
          }
          else if(num>=9)
          {
               printf("IX");
               num-=9;
          }
          else if(num>=5)
          {
               printf("V");
               num-=5;
          }
           else if(num>=4)
          {
               printf("iv");
               num-=4;
          }
          else if(num>=1)
          {
               printf("i");
               num-=1;
          }
     }

     return 0;
}
