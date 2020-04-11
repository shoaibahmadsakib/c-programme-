#include <stdio.h>

struct student{
    char    name[30];
    int     roll;
    float   marks;
};

int main()
{
    struct student  std;        //structure variable
    struct student  *ptr;
    struct student  *ptr1;       //pointer to student structure

    ptr= &std;
        ptr1= &std;                //assigning value of structure variable

    printf("Enter details of student: ");
    printf("\nName :");
           gets(ptr->name);
    printf("Roll No :");
     scanf("%d",&ptr->roll);
    printf("marks:");
       scanf("%f",&ptr->marks);

        printf("\nName :");
           gets(ptr1->name);
    printf("Roll No :");
     scanf("%d",&ptr1->roll);
    printf("marks:");
       scanf("%f",&ptr1->marks);

    printf("\nEntered details: ");
    printf("\nName:%s \nRollNo: %d \nPercentage: %.02f\n",ptr->name,ptr->roll,ptr->marks);
     printf("\nName:%s \nRollNo: %d \nPercentage: %.02f\n",ptr1->name,ptr1->roll,ptr1->marks);


    return 0;
}
