#include <stdio.h>
#include <math.h>
int main()
{
    int num, rem = 0, count = 0;
    int arr[1234];
    printf("Give Your Input n Decimal Format\n");
    scanf("%d", &num);

    while (num != 0)
    {
            if (num % 2 != 0)
            {
                count++;
                arr[count] = 1;
            }
            else if (num % 2 == 0)
            {
                count++;
                arr[count] = 0;
                
            }
            num = num / 2;

    }
    for (int i = count; i >= 1; i--)
    {
        printf("%d", arr[i]);
    }
    return 0;
}