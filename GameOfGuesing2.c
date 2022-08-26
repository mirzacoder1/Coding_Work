#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    char ch, count = 0;
    int upper, lower;
    printf("Enter the lower and upper limits\n");
    scanf("%d%d", &lower, &upper);
start:
    count++;
    printf("Enter Only One Character\n");
    char random = (rand() % (upper - lower + 1)) + lower;
    getchar();
    scanf("%c", &ch);
    if (ch != random)
    {
        printf("Do it Again\n");
        printf("The Random generated Character is %c\n", random);
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