#include <stdio.h>
#include <math.h>
int main()
{
    int a, n, rem, temp, count = 0;
    int b = 0;
    printf("Give the Input no.\n");
    scanf("%d", &a);
    temp = a;
    while (temp  != 0)
    {
        temp = temp / 10;
        count++;
    }
    temp = a;
    while (temp != 0)
    {
        rem = temp % 10;
        b = b + pow(rem, count);
        temp = temp / 10;
    }

    if (b == a)
    {
        printf("The given number is Armstrong Number\n");
    }
    else
    {
        printf("The given number is not an Armstrong Number\n");
    }

    return 0;
}