#include <stdio.h>
int main()
{
    for (int i = 65; i <= 90; i++)
    {
        printf("%c ",i);
    }
    printf("\n");
    for (int i = 65; i < 91; i++)
    {
        printf("%c%c ",i,i+32);
    }
    printf("\n");
    for (int i = 65; i < 91; i++)
    {
        printf("%c%c ", i + 32, i);
    }
    for (int i = 57; i > 47; i--)
    {
        printf("%c ", i);
    }

    short int ch = 32;
    printf("%c,%d",ch,ch);

    int a = 12;
    printf("%d\t", a >> 1);
    a = 12;
    printf("%d", a << 1);

    a = 10;
    char b = 'a';
    a = a + b;
    float c = a + 1.0;
    printf("%f,%d", c, a);

    return 0;
}