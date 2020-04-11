#include<stdio.h>
#define PI 3.14
int main()
{
     int r;
     printf("enter a radius");
     scanf("%d",&r);
     printf("the area is %d",findArea(r));
}
int findArea(int r)
{
     int area;
     area=PI*r*r;
     return area;
}
