#include<stdio.h>

int main()

{
int num;
     printf("Enter any number to check even or odd: ");
     scanf("%d",&num);



     switch(num%2)
          {
            case 0:
            printf("\nYou Enter Number is : Even ");
            printf("\n\n ");
            break;



            case 1:
            printf(" \nYou Enter Number is: Odd ");
            printf("\n\n ");
            break;

           }
return 0;
}

