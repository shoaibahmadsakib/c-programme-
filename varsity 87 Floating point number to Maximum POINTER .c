#include <stdio.h>
#include <stdlib.h>
void main()
{
 float d,a,*ptr1=&d,*ptr2=&a;


   printf(" Input two number : ");
   scanf("%f %f",&d,&a);


 if(*ptr1>*ptr2)
 {
  printf("\n\n %f is the maximum number.\n\n",*ptr1);
 }
 else
 {
  printf("\n\n %f is the maximum number.\n\n",*ptr2);
 }

}
