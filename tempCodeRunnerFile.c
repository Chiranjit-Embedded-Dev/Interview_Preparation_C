int fun_revers_number(int n)
{
    int digit;
    if (n == 0)
        return 0;
    else
        digit = n % 10;
    printf("%d", digit);
    return fun_revers_number(n / 10);
}
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Reversed number: ");
    fun_revers_number(number);
    printf("\n");
    return 0;
}