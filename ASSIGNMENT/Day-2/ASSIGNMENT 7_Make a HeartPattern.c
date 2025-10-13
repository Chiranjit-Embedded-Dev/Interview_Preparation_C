#include<stdio.h>

void main()
{
    int i,j,n;

    printf("Enter the number of line of *\n");
    scanf("%d",&n);
    printf("  *   * ");
    printf("\n");

    for(i=n;i>=1;i--)
    {
        for(j=i; j<=n; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
