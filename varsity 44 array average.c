#include<stdio.h>
int main()
{
     int n,i;
     int num[100],sum=0;
    float avg;
    printf("enter number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         printf("%d enter number:",i);
         scanf("%d",&num[i]);
         sum=sum+num[i];
    }
    avg=sum/n;
    printf("the average is %f",avg);
    return 0;

}
