#include <stdio.h>
int main()
{
    int age;
    scanf("%d", &age);
    if (age >= 18)
    {
        switch (age)
        {
        case 19:
        case 18:
        case 20:
        case 21:
            printf("You are elligible for voting and gotta prize\n");
            break;

        default:
            printf("You are elligible for voting but you got nothing\n");
            break;
        }
    }
    else
    {
        printf("You are not elligible for voting\n");
    }
    return 0;
}