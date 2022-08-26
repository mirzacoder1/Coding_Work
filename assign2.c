#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int a = 1;
    // int b = 5;
    int c = ++a + ++a + a++;
    printf("%d", c);
    return 0;
}