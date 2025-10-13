
#include<stdio.h>
     int main()
     {
	int x = -300;
	unsigned int *p;
	p = &x;
	printf("%d\n",*p++);
	printf("%d\n",*p);
     }
