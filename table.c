#include <stdio.h>
int main()
{
    int a, b = 1;

    printf("Enter number\n");
    scanf("%d", &a);
    while (b <= 10)
    {
        printf("%d x %d = %d\n", a, b, a * b);
        b++;
    }

    return 0;
}
