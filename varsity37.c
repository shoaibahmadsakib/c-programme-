#include<stdio.h>
int main()
{
    int a,b,x;
    printf("enter the two value:");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        x=a;
    }
    else{
            x=b;
    }


   sakib:if(x%a==0&&x%b==0)
        printf("the lcd is=%d",x);

else{
    x=x+1;
    goto sakib;
}

  return 0;
}

