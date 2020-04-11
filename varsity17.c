#include<stdio.h>
int main()
{
    int i,j,k;
    printf("enter three number:");
    scanf("%d %d %d",&i,&j,&k);
    if(i>j&&i>k)
    {
        printf("%d is maximum",i);

    }
    else if(j>i&&j>k)
    {
        printf("%d is maximum",j);
    }
    else
        printf("the number is maximum",k);
    return 0;
}

