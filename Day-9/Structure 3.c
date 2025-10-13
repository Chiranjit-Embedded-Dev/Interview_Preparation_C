#include<stdio.h>

struct stud{
int no;
char name[10];
float marks;
};
int main()
{
int i;
struct stud s[15];
printf("Enter 15 students details");
for(i=0;i<15;i++)
{

   scanf("%d",&s[i].no);
   scanf("%s",&s[i].name);
   scanf("%f",&s[i].marks);
}
printf("\nStudent Information:");
   for(i=0;i<15;i++)
   {
      printf("\nRollno:%d, Name:%s, Marks:%f",s[i].no,s[i].name,s[i].marks);
   }
   return 0;
}
