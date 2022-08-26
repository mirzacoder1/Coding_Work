#include <stdio.h>
#include <math.h>
int main()
{
    unsigned int num, result = 0, count = 0;
    printf("Enter Your Binary number\n");
    scanf("%u", &num);
    int rem;
    // int result = 1;
    while (num != 0)
    {
        count++;
        rem = num % 10;
        if (rem == 0 || rem == 1)
        {
            result = result + rem * pow(2, count - 1);
            // c = result;
        }
        // else if (rem == 1)
        // {
        //     result = result + rem * pow(2, count - 1);
        //     // c = result;
        // }

        num = num / 10;
    }
    if (rem != 0 && rem != 1)
    {
        printf("Please Enter The valid Binary No.\n");
        goto end;
    }
    printf("The answer is %u", result);
end:

    return 0;
}
