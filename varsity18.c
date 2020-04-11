#include<stdio.h>
int main()
{
    int i,j,k;
    printf("enter three number:");
    scanf("%d %d %d",&i,&j,&k);
    if(i<j&&i<k)
    {
        printf("%d is minimum",i);

    }
    else if(j<i&&j<k)
    {
        printf("%d is minimum",j);
    }
    else
        printf("%d is minimum",k);
    return 0;
}


