#include<stdio.h>
int main()

{int year;
printf("enter a year:");
scanf("%d",&year);
if(year%400==0)
    printf("this is a leap year",year);
else if((year%100!=0)&&(year%4==0))
printf("this is  a leap year",year);

else
    printf("this is not a leap year");
return 0;
}



