#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int i = 0, count = 0;
    char a[10], b[10];
    printf("Enter Your string\n");
/*     scanf("%[^\n]s",a);

    puts(a);
    // printf("\n\n\n");
    // strcpy(b,a);
    // printf("%s",b); */
    for (int i = 0; i < 10; i++)
    {
        scanf("%c",&a[i]);
        b[i]=a[i];
    }
    printf("%s\n%s",a,b);
    

    return 0;
}