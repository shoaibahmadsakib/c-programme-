#include<stdio.h>

struct cricket {
   char player[20];
   char team[20];
   int avg[10];
};

void main()
{
   int i, n,outer,inner;
   struct cricket a[12],temp;
   printf("enter player");
   scanf("%d",&n);

for (i = 0; i <n; i++) {
      printf("\nEnter Player Name : ");
      scanf("%s", a[i].player);
      printf("\nEnter Team Name : ");
      scanf("%s", a[i].team);
      printf("\nEnter Average : ");
      scanf("%s", a[i].avg);
      printf("\n");
   }


   for (outer = n-1; outer > 0; outer--)
      for (inner= 0; inner<outer; inner++)
         if (strcmp(a[inner].team, a[inner+1].team) > 0)
               {
            temp = a[inner];
            a[inner] = a[inner + 1];
            a[inner + 1] = temp;
         }
      printf("player name   team name   avg");
      printf("===============================");

   for (i = 0; i < n; i++)
      printf("\n%-11s %-12s  %7s",a[1].player,a[1].team,a[1].avg);

   getch();
}
