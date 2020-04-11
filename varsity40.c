#include<stdio.h>
int main()
{
    int num,count=0,i;
    printf("enter a number:");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    if(num%i==0){
        count++;
        break;
    }
    if(count==0)
        printf("this is a prime number:\n");
    else
        printf("this is not a prime number");
    return 0;
}
