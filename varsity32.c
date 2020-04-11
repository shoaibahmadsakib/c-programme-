#include<stdio.h>
int main()
{
    int i,rev=0,rem;
    printf("enter a number");
    scanf("%d",&i);
    while(i!=0)
    {
rem=i%10;
     rev=rev*10+rem;
     i=i/10;
    }



    printf("reversed is %d",rev);

    return 0;
}
