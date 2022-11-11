#include <stdio.h>
#include <math.h>

int fun(int n)
{
    int nPrime = 0;
    if (n<2)
    {
        return 0;
    }
    else
    {


    
        for (int i=2; i <= llround(sqrt(n)); i++)
        {
            if (n % i == 0)
            {
                nPrime = 1;
            }
        }
        if (nPrime == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

    int foo(int n)
    {
        if (n == 0)
        {
            return 0;
        }
        int i = 0, sum = 0;
        while (sum <= n)
        {
            i++;
            sum += i;
        }
        return i - 1;
    }

int main(void)
{
    printf("fun(1) = %d \n", fun(1));
    printf("fun(5) = %d \n", fun(5));
    printf("fun(9) = %d \n", fun(9));
    printf("foo(1) = %d \n", foo(1));
    printf("foo(5) = %d \n", foo(5));
    printf("foo(9) = %d \n", foo(9));
    return 0;
}
