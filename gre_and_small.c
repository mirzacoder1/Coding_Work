#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Your Digits\n");
    scanf("%d%d%d",&a,&b,&c);

    if (a>b)
    {
        if (a>c)
        {
            printf("The largest number is ~~%d~~\n",a);
        }
        else
        {
            printf("The largest number is ~~%d~~\n", c);
        }
    }
    else
    {
        printf("The largest number is ~~%d~~\n", b);
    }

    if (a<c)
    {
        if (a<b)
        {
            printf("The smallest number is ~~%d~~\n", a);
        }
        else
        {
            printf("The smallest number is ~~%d~~\n",b);
        }
    }
    else
    {
        printf("The smallest number is ~~%d~~\n",c);
    }
    return 0;
}