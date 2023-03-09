#include <stdio.h>

int fibonacci(int n) 
{
    if (n == 1 || n == 2)
        return 1; 
    return fibonacci(n - 1) + fibonacci(n - 2); 
}

int main()
{
    int n;
    printf("Введите число: ");
    if (scanf("%d", &n) != 1)
    {
        printf("n/a");
        return 0;
    }

    printf("%d", fibonacci(n));

    return 0;
}
