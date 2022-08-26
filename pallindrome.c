#include <stdio.h>
#include <math.h>

int Pallindrome(int n)
{
    int number = n;
    int reversed = 0;
    while (number != 0)
    {
        reversed = reversed * 10 + number % 10;
        number = number / 10;
    }
    number = n;
    printf("The reversed value is %d\n", reversed);
    if (reversed == number)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    printf("Give Your Input.\n");
    scanf("%d", &num);
    if (Pallindrome(num))
    {
        printf("The given number is Pallindrome Number.\n");
    }
    else
    {
        printf("The given number is not a Pallindrome Number.\n");
    }

    return 0;
}