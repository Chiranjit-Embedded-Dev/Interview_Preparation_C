#include<stdio.h>
#include <string.h>
struct Addhar
{ char  no[20];
char name[50];
char add[50];
int pin;
int age;
}e1; //declaring e1 variable for structure
int main( )
{
//store first employee information
strcpy(e1.no, "1234 4321 1234 4321");
strcpy(e1.name, "Chiranjit Adhikary");
strcpy(e1.add, "Kolkata West Bengal");//copying string into char array
e1.pin=743412;
e1.age=26;
//printing first employee information
printf( "Addhar No : %s\n", e1.no);
printf( "Name : %s\n", e1.name);
printf( "Address  : %s\n", e1.add);
printf( "PIN No : %d\n", e1.pin);
printf( "AGE : %d\n", e1.age);
}
