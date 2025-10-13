#include <stdio.h>

int add(int x, int y)
{
	return printf("%*c%*c", x, ' ', y, ' ');
}

// Driver code
int main()
{
	printf("Sum = %d", add(3, 4));
	return 0;
}
