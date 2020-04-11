#include<stdio.h>
int main()
{
    int a;
    printf("enter a mark:");
    scanf("%d",&a);
    if(a>80)
        printf("%d is A+",a);
    else if(a>70)
        printf("%d is A",a);
      else if(a>60)
            printf("%d is A-",a);
       else if(a>40)
            printf("%d is B",a);
else
       printf("%d is fail",a);

    return 0;
}
