#include <stdio.h>

int fibonacci(int n);

int main()
{
    int value = fibonacci(10);
    printf("Fibonacci %d", value);
    return 0;
}

int fibonacci(int n)
{
    if(n == 1 || n== 2)
    {
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}   