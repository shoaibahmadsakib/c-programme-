#include<stdio.h>
int main()
{
    int i,n,rem,sum=0,d;
    printf("Enter n:\n");
    scanf("%d",&n);
    while(n!=0)
    {
        sum=0;
        while(n!=0)
        {
            rem=n%10;
            sum=sum+rem;
            n=n/10;
        }
        if(sum>9)
        {
            n=sum;
        }
    }
    printf("digital root value is %d\n",sum);
}
