#include<stdio.h>
#include <string.h>
struct employee
{ int id;
char name[50];
}e1; //declaring e1 variable for structure
int main( )
{
//store first employee information
e1.id=101;
strcpy(e1.name, "IIES Banglore");//copying string into char array
//printing first employee information
printf( "employee 1 id: %d\n", e1.id);
printf( "employee 1 id: %s\n", e1.name);

}
