#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num, count = 0;
    int upper, lower;
    printf("Enter the lower and upper limits\n");
    scanf("%d%d", &lower, &upper);
start:
    count++;
    printf("Enter the Number\n");
    scanf("%d", &num);
    int random = (rand() % (upper - lower + 1)) + lower;
    if (num != random)
    {
        printf("Do it Again\n");
        printf("The Random generated No. is %d\n", random);
        goto start;
    }
    else
    {
        printf("The Total attempt is %d\n", count);
        if (count <= 10)
        {
            printf("You are Super Intelligent\n");
        }
        else
        {
            if (count <= 25)
            {
                printf("You are so Smart\n");
            }
            else
            {
                if (count <= 50)
                {
                    printf("You are not an Intelligent One\n");
                }
            }
        }
    }

    return 0;
}