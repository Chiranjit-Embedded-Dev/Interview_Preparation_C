int fun_sumofdigit(int n)
{
if (n == 0)
{
    return 0;//base case
}
else 
return (n%10)+fun_sumofdigit(n/10);

}

int main()
{
    int num;
    printf(" Please enter a number =");
    scanf("%d",&num);
    int result = fun_sumofdigit(num);
    printf(" The sum of %d is %d ",num,result);
    
    return 0;
}