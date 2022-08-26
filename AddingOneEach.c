#include <stdio.h>
// #include <stdlib.h>
// #include "string.h"
// #include "math.h"
int PlusOne(int n)
{
    int number = n;
    int remainder = n % 10;
    remainder = remainder + 1;
    return remainder;
}
int main()
{
    int num, count = 1, rem, result = 0;
    printf("Give your input.\n");
    scanf("%d", &num);

    while (num != 0)
    {
        result = PlusOne(num) * count + result;
        count = count * 10;
        num = num / 10;
    }
    printf("The value is %d\n", result);

    return 0;
}