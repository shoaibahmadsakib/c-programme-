#include<stdio.h>
 struct student
 {
     char name[20];
     int roll,mark;

 };
 int main()
 {
     struct student student1,student2,student3,*st,*st1,*st2;


     st=&student1;
     st1=&student2;
     st2=&student3;
     printf("Give first student information \n");
     printf("Enter your name : ");
     gets(st->name);
     printf("Enter your roll : ");
     scanf("%d",&st->roll);
     printf("enter your mark : ");
     scanf("%d",&st->mark);
     printf("Enter second student information\n ");
     printf("Enter your name : ");
     fflush(stdin);
     gets(st1->name);
     printf("enter your roll : ");
     scanf("%d",&st1->roll);
     printf("enter your mark : ");
     scanf("%d",&st1->mark);
     printf("Enter second student information\n ");
     printf("Enter your name : ");
     fflush(stdin);
     gets(st2->name);
     printf("enter your roll : ");
     scanf("%d",&st2->roll);
     printf("enter your mark : ");
     scanf("%d",&st2->mark);
     printf("Entered information\n");
     printf("First student information.\n");
     printf("Name :%s\nRoll :%d\nMark :%d\n",st->name,st->roll,st->mark);
     printf("Second student information.\n");
     printf("Name :%s\nRoll :%d\nMark :%d\n",st1->name,st1->roll,st1->mark);
       printf("Third student information.\n");
     printf("Name :%s\nRoll :%d\nMark :%d\n",st2->name,st2->roll,st2->mark);
 }
