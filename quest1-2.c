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
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

int main(void)
{
    printf("fun(1) = %d \n", fun(1));
    printf("fun(5) = %d \n", fun(5));
    printf("fun(9) = %d \n", fun(9));
    return 0;
}