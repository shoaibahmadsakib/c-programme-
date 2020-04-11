#include<stdio.h>
int main()
{
    int i;
    printf("enter a number:");
    scanf("%d",&i);
    if(i%2==0)
    {
        printf("%d is even",i);

    }
    else if(i==0)
    {
        printf("%d is zero",i);
    }
    else
        printf("the number is odd",i);
    return 0;
}
