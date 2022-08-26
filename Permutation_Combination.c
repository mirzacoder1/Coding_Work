#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// int factorial(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * factorial(n - 1);
//     }
// }
int factorial(int n){
    int result=1;
    for (int i = 1; i <= n; i++)
    {
        result=result*i;
    }
    return result;
}
int main()
{
    int n, r, result = 0;
    printf("Give your input for n & r:\n");
    scanf("%d%d", &n, &r);

    if (r < n)
    {
        result = factorial(n) / factorial(n - r);
    }
    else if (r > n)
    {
        result = factorial(n) / factorial(r - n);
    }
    else
    {
        result = factorial(n);
    }

    printf("The Permutation of nPr is: %d\n", result);

    if (n > r)
    {
        result = factorial(n) / (factorial(r) * factorial(n - r));
    }
    else if (n < r)
    {
        result = factorial(n) / (factorial(r) * factorial(r - n));
    }
    else
    {
        result = 1;
    }

    printf("The Combination of nCr is: %d", result);

    return 0;
}