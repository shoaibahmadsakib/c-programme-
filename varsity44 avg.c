#include<stdio.h>
int main()
{
     int n,i;
     float num[100],sum=0,avg;
     printf("enter any number");
     scanf("%d",&n);
     while(n>100||n<=0)
     {
          printf("error");
          printf("next cheak");
          scanf("%d",&n);
     }
     for(i=0;i<n;i++)
     {
          printf("%d .enter number",i+1);
          scanf("%f",&num[i]);
          sum=sum+num[i];
     }
     avg=sum/n;
     printf("avg is %f",avg);
     return 0;
}
