/*WAP a Logic of convert number in words*/
#include<stdio.h>
void main()
{
     int n,a=0;
      printf("Enter any Number: ");
      scanf("%d", &n);

while(n != 0)
    {
        a = (a * 10) + (n % 10);
        n /= 10;
    }
     while(a != 0)
    {
        switch(a % 10)
        {

        case 0:
          printf("Zero ");
                break;

                 case 1:
          printf("One ");
                break;

          case 2:
          printf("Two ");
                break;

          case 3:
          printf("Three ");
                break;

          case 4:
          printf("Four ");
          break;

          case 5:
          printf("Five ");
          break;

         case 6:
          printf("Six ");
                break;

          case 7:
          printf("Seven ");
                break;

          case 8:
          printf("Eight ");
                break;
          case 9:
          printf("Nine ");
                break;


}

        a = a / 10;
    }

    return 0;
}
