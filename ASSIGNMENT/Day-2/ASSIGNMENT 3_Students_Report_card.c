/* Write a  Program to Check Pass Fail and Report card  */
#include<stdio.h>

#include <windows.h>

void main()
{

//5 Subject Number

float Math,English, Physics,Biology, Chemistry,Total;

float Avg;
int count=0;

    printf("Please Enter Math number        : ");
    scanf("%f",&Math);

    printf("Please Enter English number     : ");
    scanf("%f",&English);

    printf("Please Enter Physics number     : ");
    scanf("%f",&Physics);

    printf("Please Enter Biology number     : ");
    scanf("%f",&Biology);

    printf("Please Enter Chemistry number   : ");
    scanf("%f",&Chemistry);


printf("\n\n");



printf("Math          = %.2f",Math);

    if (Math<=30)
    {

     printf("\tFail\t\n");
    ++count;
    }
    else

   {
    printf("\tPass\t\n");

   }

printf("English       = %.2f",English);
    if (English<=30)
    {

     printf("\tFail\t\n");
      ++count;
    }
    else

   {
    printf("\tPass\t\n");

   }



printf("Physics       = %.2f",Physics);
    if (Physics<=30)
    {

     printf("\tFail\t\n");
      ++count;
    }
    else

   {
    printf("\tPass\t\n");

   }



printf("Biology       = %.2f",Biology);
    if (Biology<=30)
    {

     printf("\tFail\t\n");
     ++count;
    }
    else

   {
    printf("\tPass\t\n");

   }


printf("Chemistry     = %.2f",Chemistry);
    if (Chemistry<=30)
    {

     printf("\tFail\t\n");
    ++count;
    }
    else

   {
    printf("\tPass\t\n");

   }


printf("\n\n");

//5 Subject Total

Total=(Math+English+Physics+Biology+Chemistry);

printf("Total Number Obtained     :%.2f ", Total);

printf("\n\n");

//5 Subject AVG or Percentage

Avg=Total/5;

printf("Percentage  Number Obtained     :%.2f %%", Avg);
printf("\n\n");

//Grading // I am using ''nested if'' Statement
if (Avg>=29 && Avg<100 && count<2 )
{

    if (Avg>=35 &&Avg<39 )
    {
         printf("Grade C\n");
    }

   if (Avg>=39 && Avg<49 )
    {
         printf("Grade C+\n");
    }
    if(Avg>=49&& Avg<59)
    {
         printf("Grade B\n");
    }

   if (Avg>=59&& Avg<69 )
    {
         printf("Grade B+\n");
    }
      if (Avg>=69 && Avg<79)
    {
         printf("Grade A\n");
    }

   if(Avg>=79&& Avg<89)
    {
         printf("Grade A+\n");
    }
   if (Avg>=100)
    {
         printf("Grade A++\n");
    }



  printf("Pass");
}
else
{
printf("Fail");
system("COLOR 4");
printf("\n\n");
}
//Subject wish Fail show in out put  //
 if (Math<=30)
    {

     printf("\tFail in : Math \t\n");
    }

    if (English<=30)
    {

     printf("\tFail in : English \t\n");
    }
     if (Physics<=30)
    {

     printf("\tFail in : Physics \t\n");
    }

    if (Biology<=30)
    {

     printf("\tFail in : Biology \t\n");
    }

        if (Chemistry<=30)
    {

     printf("\tFail in : Chemistry \t\n");
   }

//Subject wish Fail show in out put  //
printf("\n\n");

printf("\FAIL in :%d Subject \t\n",count);

}


