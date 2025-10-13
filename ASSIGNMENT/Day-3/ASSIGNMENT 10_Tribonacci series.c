/* Write a  C program for Tribonacci series*/

#include<stdio.h>
int main()
{
	int  t1=0,t2=0,t3=3,add=0,i,n;

     printf("Please Enter a Number \n:");
     scanf("%d",&n);
     printf("%d\t%d\t%d",t1,t2,t3);
	for(i=3;i<n;i++)
	{

		add=t1+t2+t3;
		printf("\t%d ",add);
		t1=t2;
		t2=t3;
		t3=add;
	}
}
