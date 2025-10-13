#include<stdio.h>
struct employee
{
   int employee_id ;
   char employee_Name[20];
   int  employee_no;
};
int main()
{
     struct employee Ep1= {007,"Chiru",10};
     printf("%d\n",Ep1.employee_id);
     printf("%s\n",Ep1.employee_Name);
     printf("%d\n",Ep1.employee_no);
}
