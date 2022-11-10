#include<stdio.h>
#include<math.h>

int Factory(int n)
{
    int result1 = 1;
    if (n>1)
    {
        for (int i=1; i<=n; i++)
        {
            result1 = result1 * i;
        }
        return result1;

    }
    else if (n=0)
    {
        return 1;
    }
    
}

int Sum(int n)
{
    int result3 = 0;
    for (int i=1; i<=n; i++)
    {
        result3 = result3 + i;
    }
    return result3;
}

int Power(int n, int m)
{
    int result2 = 1;
    for (int i=1; i <= m; i++)
    {
        result2 = result2 * n;
    }
    return result2;

}

int main(void)
{   
    int n = 0, m = 0;

    printf("Enter n: ");
    scanf("%d", &n);
    printf("\n F(1) = %d \n\n F(2) = %d \n \n", Factory(n), Sum(n));

    printf("Enter m: ");
    scanf("%d", &m);
    printf("\n Result: %d", Power(n,m));
    return 0;
}