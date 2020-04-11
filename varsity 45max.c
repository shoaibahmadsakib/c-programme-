#include<stdio.h>
int main()
{
    int a[50],size,i,larg;
    printf("enter the size of array\n");
    scanf("%d",&size);
    printf("enter %d element of array",size);
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    larg=a[0];
    for(i=1;i<size;i++)
    {
        if(a[i]>larg)
            larg=a[i];
    }
    printf("largest element is=%d",larg);
    return 0;
}
