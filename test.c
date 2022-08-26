#include <stdio.h>
int main()
{
    int number = 91, arr[1234], count = 0;
    while (number != 0)
    {
        if (number % 2 != 0)
        {
            count++;
            arr[count] = 1;
        }
        else
        {
            count++;
            arr[count] = 0;
        }
        number = number / 2;
    }
    for (int i = count; i >=1; i--)
    {
        printf("%d",arr[i]);
    }
    

    return 0;
}