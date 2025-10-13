
/** C program to convert temperature from degree Fahrenheit to Celsius*/
 #include<stdio.h>
float C,F;
int main()
{

     printf("Please Enter Degree Fahrenheit :");
     scanf("%f",&F);
     C=(F - 32) * 5 / 9;
     printf("\n=%.2f%CC\n",C,248);
}
